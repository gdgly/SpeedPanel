#include "stm32f1xx_hal.h"
#include "ST7529.h"
#include <stdio.h>
#include "HMC5883L.h"
#include "UI.h"
#include "18B20.h"
#include "page.h"
#include "RotaryEncoder.h"

//ָ����
#define CAMX 42
#define CAMY 4

//ʱ����ʾλ��
#define TIME_X	0
#define TIME_Y	0

//�¶���ʾλ��
#define TEM_X		174
#define TEM_Y		0

//�ٶ���ʾλ��
#define SPEED_X 88
#define SPEED_Y 32

//��ѹ����
#define VOL_X  188
#define VOL_Y  60

/* ����ʾҳ��*********************************************/
void MainUI_dis(void);
void MainUI_loop(void);
void MainUI_exit(void);

extern PageTypeDef SettingUi;

PageTypeDef PageMainUi=
{
	1,
	MainUI_dis,
	MainUI_loop,
	MainUI_exit	
};



extern uint8_t UI;		//��ǰ��ʾ����
extern uint8_t COMP_state;		//������״̬
extern I2C_HandleTypeDef hi2c1;
extern RTC_HandleTypeDef hrtc;
extern uint8_t BUTTON;	//��ǰ���µİ���
extern PageTypeDef *CurrentPage;


RTC_TimeTypeDef sTime;
RTC_DateTypeDef sDate;

void Display_speed(void);  //�ٶ�ֵ��Speed.c�ļ��м���
float Voltage=0.0;
float Current=0.0;

uint8_t B20_err;


__IO uint8_t SEC_INT=0;    //���жϣ�sys_tick�ж�1000�Σ����ж���1
__IO uint8_t SPEED_REF_INT=0; // �ٶȸ����ж�

DS18B20 B20;

//��ʾ������
void MainUI_dis(void)
{
	//��ǰ����Ϊ������
	UI=UI_MAIN;
	//����
	ST7529_Fill(0,84,0,127,0xff);
	//��ʾ��ͷ
	ST7529_Dispic(arrow, 124, 0, 7, 4);
	//��ϵͳʱ�䲢��ʾ
	HAL_RTC_GetTime(&hrtc, &sTime, RTC_FORMAT_BIN);
	//HAL_RTC_GetDate(&hrtc, &sDate, RTC_FORMAT_BIN);
	
	FONT=ASCII9X12;
//	X=0;
//	Y=0;	
//	printf("%02d/%02d", sDate.Month, sDate.Date);		
	//5.18-����ʾ����
	
	Y=TIME_Y;
	X=TIME_X;
	printf("%2d:%02d:%02d", sTime.Hours, sTime.Minutes, sTime.Seconds);
	X=189;
	Y=0;
	
	//��ʼ��18B20
	B20_err=DS18B20_Init(&B20, GPIOB, GPIO_PIN_12);
	
	//��ʾ���϶�
	ST7529_Dispic(Degree, TEM_X+63, TEM_Y, 12, 12);

	//��ʾ��ѹ����
//	ST7529_Dispic(DIAN, VOL_X, VOL_Y, 12, 12);
//	ST7529_Dispic(YA, VOL_X+12, VOL_Y, 12, 12);
//	ST7529_Dispic(DIAN, VOL_X, VOL_Y+12, 12, 12);
//	ST7529_Dispic(LIU, VOL_X+12, VOL_Y+12, 12, 12);	
	
}

//������ѭ������
void MainUI_loop(void)
{
	uint16_t direction;	
	short tem;
	FONT=ASCII9X12;
	//�������һ��
	if (SEC_INT==1)
	{
/**����ʱ��******************************************/ 
		sTime.Seconds++;
		if (sTime.Seconds>=60)
		{
			sTime.Minutes++;
			if (sTime.Minutes>=60)
			{
				sTime.Hours++;
				if (sTime.Hours>=24)
					sTime.Hours=0;
				X=TIME_X;
				Y=TIME_Y;
				printf("%02d", sTime.Hours);
				sTime.Minutes=0;
			}
			X=27+TIME_X;
			Y=TIME_Y;
			printf("%02d", sTime.Minutes);
			sTime.Seconds=0;
		}
			X=54+TIME_X;
			Y=TIME_Y;
			printf("%02d", sTime.Seconds);
		
		SEC_INT=0;
/**�����¶�**************************************/
		X=TEM_X+30;
		Y=TEM_Y;
		if (B20_err==1)
		{
			tem=DS18B20_Get_Temp(&B20);
			printf("%.1f", ((float) tem)/10.0);	
		}
		else
		{
			printf("ERR");
			B20_err=DS18B20_Init(&B20, GPIOB, GPIO_PIN_12);
		}
	}
	
//���0.5sʱ�䵽
	if (SPEED_REF_INT==1)
	{
		//����ָ����
		if (COMP_state==HAL_OK)
		{
			direction=Direction(&hi2c1, 5);
			ST7529_Fill(CAMX-18, CAMX+18, CAMY, CAMY+19, 0XFF);
			ST7529_Compass(CAMX-16, CAMY, direction*53/100);
		}
		else
		{
			FONT=ASCII9X12;
			X=CAMX-18;
			Y=CAMY;
			printf("ERR=%d", COMP_state);
		}

		SPEED_REF_INT=0;
	}
	//�����ٶ�
	FONT=DIG40X60;
	X=SPEED_X;
	Y=SPEED_Y;
	Display_speed();

	
	/*���µ�ѹ����

	FONT=ASCII9X12;
	X=VOL_X+12;
	Y=VOL_Y;
	printf("%04.1fV", Voltage);
	X=VOL_X+12;
	Y=VOL_Y+14;
	printf("%04.1fA", Current);
	X=VOL_X+12;
	Y=VOL_Y+28;
	printf("%04.0fW", Current*Voltage);
	*/
	
	
	switch(BUTTON)
	{
		case TURN_CCW:
			BUTTON=NO_ACT;
		case TURN_CW:
			BUTTON=NO_ACT;		
		break;		
		case PUSH_BUTTON:
			SettingUi.PageInit();
			CurrentPage=&SettingUi;
			BUTTON=NO_ACT;
		break;
	}


}



/*ƫ����ʾͼƬ
x1 X (COLUMNM)
y1 Y
shift ƫ�Ƶ���
0~48*4=192
0Ϊ����
*/
/*�˰汾5.18�գ���ʾ����Ļ�Ϸ�����ͷ���������
void ST7529_Compass(uint8_t x1, uint8_t y1, uint8_t shift)
{
	uint8_t i, j, k, line, shift_t;
	uint8_t rem, tem;

	ST7529_DrawPix(0xe0); //��λ
	shift_t=shift;
	//��0-196��ƫ�Ƽ�Ϊ0-48
	i=shift/48;
	shift=shift-48*i;
		
	Write_CMD(0x30);		//EXT=0
	Write_CMD(0X15);		//�����е�ַ��ָ��
	Write_Data(x1);			//������ʼ��
	Write_Data(x1+31);		//������ֹ��
	Write_CMD(0X75);		//�����е�ַ��ָ��
	Write_Data(y1+16);		//������ʼ
	Write_Data(y1+7);		//������ֹ��
	Write_CMD(0x5c);		//�������Դ�д����	

	j=shift/8;					//��һ�����ڵ��ֽ�
	rem=shift%8;

  for (line=0;line<8;line++)
	{
		tem=ruller[line*6+j];
		//���һ���ֽ���ĵ�
		tem>>=rem;
		for (i=0;i<8-rem;i++)
		{			
			if((tem&0x01)==0x01)
				ST7529_DrawPix(0x00);
			else
				ST7529_DrawPix(0xff);
			tem>>=1;	
		}
		//��һ��ʣ���ֽ�
		for (i=0;i<5-j;i++)
		{
			tem=ruller[line*6+j+i+1];
			for (k=0;k<8;k++)
			{
				if((tem&0x01)==0x01)
					ST7529_DrawPix(0x00);
				else
					ST7529_DrawPix(0xff);
				tem>>=1;	
			}			
		}
		//������һ��
		for (i=0;i<6;i++)
		{
			tem=ruller[line*6+i];
			for (k=0;k<8;k++)
			{
				if((tem&0x01)==0x01)
					ST7529_DrawPix(0x00);
				else
					ST7529_DrawPix(0xff);
				tem>>=1;	
			}			
		}
		//��shift����ֽ�
		for (i=0;i<j;i++)
		{
			tem=ruller[line*6+i];
			for (k=0;k<8;k++)
			{
				if((tem&0x01)==0x01)
					ST7529_DrawPix(0x00);
				else
					ST7529_DrawPix(0xff);
				tem>>=1;	
			}	
		}
		
		tem=ruller[line*6+j];
		for (i=0;i<rem;i++)
		{
			if((tem&0x01)==0x01)
				ST7529_DrawPix(0x00);
			else
				ST7529_DrawPix(0xff);
			tem>>=1;	
		}		
		
	}
	
	tem=x1*3;
	//��ʾ��
	if ((shift_t<48)||(shift_t>144))
	{
		if (shift_t<48)
			ST7529_Dispic(HZ_12X12+72, 122-shift_t, y1+10, 12, 12);
		else
			ST7529_Dispic(HZ_12X12+72, 170-(shift_t-144), y1+10, 12, 12);
	}
	
	//��ʾ��
	if ((shift_t<96))
	{
			ST7529_Dispic(HZ_12X12, 96-shift_t+74, y1+10, 12, 12);
	}
	
	//��ʾ��
	if ((shift_t>48)&&(shift_t<144))
	{
			ST7529_Dispic(HZ_12X12+24, 170-(shift_t-48), y1+10, 12, 12);
	}

	//��ʾ��
	if (shift_t>96)
	{
			ST7529_Dispic(HZ_12X12+48, 170-(shift_t-96), y1+10, 12, 12);
	}
}
*/

//�˰汾5.19�գ���ͷ8*3�����48*6����ĸ��ʾ������������С6*8
void ST7529_Compass(uint8_t x1, uint8_t y1, uint8_t shift)
{
	uint8_t i, j, k, line, shift_t;
	uint8_t rem, tem;

	ST7529_DrawPix(0xe0); //��λ
	shift_t=shift;
	//��0-196��ƫ�Ƽ�Ϊ0-48
	i=shift/48;
	shift=shift-48*i;
		
	Write_CMD(0x30);		//EXT=0
	Write_CMD(0X15);		//�����е�ַ��ָ��
	Write_Data(x1);			//������ʼ��
	Write_Data(x1+31);		//������ֹ��
	Write_CMD(0X75);		//�����е�ַ��ָ��
	Write_Data(y1+16);		//������ʼ
	Write_Data(y1+5);		//������ֹ�У�5.18 6�У���5
	Write_CMD(0x5c);		//�������Դ�д����	

	j=shift/8;					//��һ�����ڵ��ֽ�
	rem=shift%8;

	//lineͼ����
  for (line=0;line<6;line++)
	{
		tem=ruller[line*6+j];	//6Ϊ48/8=6,ÿ��Ϊ6BIT
		//���һ���ֽ���ĵ�
		tem>>=rem;
		for (i=0;i<8-rem;i++)
		{			
			if((tem&0x01)==0x01)
				ST7529_DrawPix(0x00);
			else
				ST7529_DrawPix(0xff);
			tem>>=1;	
		}
		//��һ��ʣ���ֽ�
		for (i=0;i<5-j;i++)
		{
			tem=ruller[line*6+j+i+1];
			for (k=0;k<8;k++)
			{
				if((tem&0x01)==0x01)
					ST7529_DrawPix(0x00);
				else
					ST7529_DrawPix(0xff);
				tem>>=1;	
			}			
		}
		//������һ��
		for (i=0;i<6;i++)
		{
			tem=ruller[line*6+i];
			for (k=0;k<8;k++)
			{
				if((tem&0x01)==0x01)
					ST7529_DrawPix(0x00);
				else
					ST7529_DrawPix(0xff);
				tem>>=1;	
			}			
		}
		//��shift����ֽ�
		for (i=0;i<j;i++)
		{
			tem=ruller[line*6+i];
			for (k=0;k<8;k++)
			{
				if((tem&0x01)==0x01)
					ST7529_DrawPix(0x00);
				else
					ST7529_DrawPix(0xff);
				tem>>=1;	
			}	
		}
		
		tem=ruller[line*6+j];
		for (i=0;i<rem;i++)
		{
			if((tem&0x01)==0x01)
				ST7529_DrawPix(0x00);
			else
				ST7529_DrawPix(0xff);
			tem>>=1;	
		}		
		
	}
	
	tem=x1*3;
	//��ʾ����5.18��Ϊ��ʾ��ĸ
	if ((shift_t<48)||(shift_t>144))
	{
		if (shift_t<48)
			ST7529_Dispic(HZ_12X12+72, 120-shift_t, y1+3, 12, 12);
		else
			ST7529_Dispic(HZ_12X12+72, 168-(shift_t-144), y1+3, 12, 12);
	}
	
	//��ʾ��
	if ((shift_t<96))
	{
			ST7529_Dispic(HZ_12X12, 94-shift_t+74, y1+3, 12, 12);
	}
	
	//��ʾ��
	if ((shift_t>48)&&(shift_t<144))
	{
			ST7529_Dispic(HZ_12X12+24, 168-(shift_t-48), y1+3, 12, 12);
	}

	//��ʾ��
	if (shift_t>96)
	{
			ST7529_Dispic(HZ_12X12+48, 168-(shift_t-96), y1+3, 12, 12);
	}
}

void MainUI_exit()
{
	
}
