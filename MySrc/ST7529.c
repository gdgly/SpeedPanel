#include "stm32f1xx_hal.h"
#include "ST7529.h"


//#define READ_HIGH 		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, GPIO_PIN_SET)
//#define READ_LOW	 		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, GPIO_PIN_RESET)
//#define WRITE_HIGH		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_1, GPIO_PIN_SET)
//#define WRITE_LOW			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_1, GPIO_PIN_RESET)
//#define CMD						HAL_GPIO_WritePin(GPIOB, GPIO_PIN_10, GPIO_PIN_RESET)
//#define DATA					HAL_GPIO_WritePin(GPIOB, GPIO_PIN_10, GPIO_PIN_SET)
//#define CS_HIGH 			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_11, GPIO_PIN_SET)
//#define CS_LOW		 		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_11, GPIO_PIN_RESET)
//#define RES_HIGH 			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_7, GPIO_PIN_SET)
//#define RES_LOW 			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_7, GPIO_PIN_RESET)

//RD=PB7
#define READ_HIGH 		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_7, GPIO_PIN_SET)
#define READ_LOW	 		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_7, GPIO_PIN_RESET)
//WR=PB6
#define WRITE_HIGH		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, GPIO_PIN_SET)
#define WRITE_LOW			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, GPIO_PIN_RESET)
//A0=PB0
#define CMD						HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, GPIO_PIN_RESET)
#define DATA					HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, GPIO_PIN_SET)
//CS=PB10
#define CS_HIGH 			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_10, GPIO_PIN_SET)
#define CS_LOW		 		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_10, GPIO_PIN_RESET)
//RES=PB11
#define RES_HIGH 			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_11, GPIO_PIN_SET)
#define RES_LOW 			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_11, GPIO_PIN_RESET)


uint8_t X=0, Y=0, FONT=ASCII9X12, REVERSE=0;

void Delay_us(uint16_t time)
{
	uint8_t i=5;
	while(time--)
		while(i--);
}

void Write_CMD(uint8_t cmd)
{
	uint16_t tem;
	
	CMD;					//write command	
	CS_LOW;				//Chip select

	READ_HIGH;		//set read pin high
	
	tem=GPIOA->ODR;	
	tem=tem&0xff00;
	tem=tem|cmd;	

	WRITE_LOW;		//write pin low
	GPIOA->ODR=tem;
	Delay_us(1);	
	WRITE_HIGH;		//wirte pin high		
	CS_HIGH;
	Delay_us(1);
}

void Write_Data(uint8_t data)
{
	uint16_t tem;
	DATA;	
	CS_LOW;
	READ_HIGH;	
	
	tem=GPIOA->ODR;
	tem=tem&0xff00;
	tem=tem|data;
	
	WRITE_LOW;	
	GPIOA->ODR=tem;
	Delay_us(1);
	WRITE_HIGH;	
	CS_HIGH;
	Delay_us(1);
}

uint8_t Read_Data(void)
{
	uint16_t tem;
	uint8_t data=0;
	DATA;	
	CS_LOW;
	WRITE_HIGH;	
	
	WRITE_LOW;	
	GPIOA->ODR=tem;
	//Delay_us(1);
	WRITE_HIGH;	
	CS_HIGH;
	//Delay_us(1);
	
	return data;
}

void ST7529_Init(void)
{
	CS_LOW;
	RES_LOW;
	HAL_Delay(100);
	RES_HIGH;
	
	Write_CMD(0x30);		//EXT=0
	Write_CMD(0x94);		//SLEEP OUT
	Write_CMD(0xD1);		//OSC ON
	Write_CMD(0x20);		//Power control set
	Write_Data(0x08);		//Booster on
	HAL_Delay(10);				//delay 1ms
	Write_CMD(0x20);		//
	Write_Data(0x0B);		//Booster on, regulater, follower on
	Write_CMD(0x81);		//�Աȶȵ��ڡ���BIAS��ѹ�й�ϵ��BIAS 1/11����Ӧ3e0���ҡ�BIAS 1/7����Ӧ210���ҡ�
	Write_Data(0xe0);		//VPR[5:0]
	Write_Data(0x03);		//VPR[8:6] �Աȶ�3e0
	Write_CMD(0xCA);		//Display control
	Write_Data(0x04);		//����Ƶ��X1)
	Write_Data(0x23);		//Duty =1/144
	Write_Data(0x00);		//���ü���Ϊһ֡��ʹ��Ĭ��ֵ11
	Write_CMD(0XA6);		//����RAM������Ϊ������ʾ
	Write_CMD(0XBB);		//����COM��תָ��
	Write_Data(0X01);		//����COMɨ��Ч��Ϊ0-79 159-80
	Write_CMD(0XBC);		//����DATAɨ�����ָ��
	Write_Data(0x00);		//����DATAɨ�����Ϊ0-254
	Write_Data(0x00);		//����RGB������˳��
	Write_Data(0x01);		//����32���Ҷ�2B3Pģʽ
	Write_CMD(0X75);		//�����е�ַ��ָ��
	Write_Data(0x10);		//������ʼ��Ϊ16
	Write_Data(0x8F);		//������ֹ��Ϊ144
	Write_CMD(0X15);		//�����е�ַ��ָ��
	Write_Data(0x00);		//������ʼ��Ϊ0
	Write_Data(0x54);		//������ֹ��Ϊ84

	Write_CMD(0X31);		//����EXT=1
	Write_CMD(0X32);		//���Ƹ��ӵ�·���õ�ָ��
	Write_Data(0x03);		//����ʱ��Ƶ��Ϊ12.7K��Ĭ��ֵ
	Write_Data(0x01);		//���ñ�ѹ���ݵ�Ƶ��Ϊ6KHZ, Ĭ��ֵ
	Write_Data(0x03);		//����BIAS=1/11
	Write_CMD(0X34);		//SOFTWARE INITIAL
	Write_CMD(0X30);		//����EXT=0
	Write_CMD(0XAF);		//����ʾ	
	
	/*����*/
	Write_CMD(0XA9);		//�˳�������ʾ
	Write_CMD(0XEE);		//�˳�������ʾ	
	
	CS_HIGH;
	HAL_Delay(100);
	ST7529_Fill(0,84,0,127,0xff);
	
}



void ST7529_Fill(uint8_t x1, uint8_t x2, uint8_t y1, uint8_t y2, uint8_t pix)
{
	uint16_t i, tem[2];
	Write_CMD(0x30);		//EXT=0
	Write_CMD(0X15);		//�����е�ַ��ָ��
	Write_Data(x1);			//������ʼ��
	Write_Data(x2);		//������ֹ��
	Write_CMD(0X75);		//�����е�ַ��ָ��
	Write_Data(y1+16);		//������ʼ
	Write_Data(y2+16);		//������ֹ��
	Write_CMD(0x5c);		//�������Դ�д����
	
	tem[0]=pix<<3|(pix>>2&0x07);
	tem[1]=pix<<6|(pix&0x1f);
	
	for (i=0;i<((uint16_t)(x2-x1+1))*(y2-y1+1);i++)
		{
			Write_Data(tem[0]);	
			Write_Data(tem[1]);
		}
}


void ST7529_Putchar(uint8_t ch)
{
	uint8_t i, j, tem, x, y;
	x=X/3;
	y=Y+16;
	ST7529_DrawPix(0xe0); //��λ
	if (FONT==ASCII9X12)
	{
		Write_CMD(0x30);		//EXT=0
		Write_CMD(0X15);		//�����е�ַ��ָ��
		Write_Data(x);			//������ʼ��
		Write_Data(x+2);		//������ֹ��
		Write_CMD(0X75);		//�����е�ַ��ָ��
		Write_Data(y);		//������ʼ
		Write_Data(y+11);		//������ֹ��
		Write_CMD(0x5c);		//�������Դ�д����
		for (i=0;i<12;i++)
		{
			tem=ASCII_9X12[(ch-0x20)*12+i];
			for (j=0;j<8;j++)
			{
				if (REVERSE==1)    //���������ʾ 
				{
					if((tem&0x01)==0x01)
						ST7529_DrawPix(0xff);
					else
						ST7529_DrawPix(0x00);
				}
				else
				{
					if((tem&0x01)==0x01)
						ST7529_DrawPix(0x00);
					else
						ST7529_DrawPix(0xff);
				}					
				tem>>=1;			
			}
			ST7529_DrawPix(0xff);
		}
		if (ch=='.')
			X+=6;		
		else
			X+=9;
	}
	
	if (FONT==DIG40X60)
	{
		ST7529_Dispic(DIG_40X60+(ch-0x30)*300, X, Y, 40, 60);
		X+=42;
	}		
	
}




/*��ʾͼƬ
2B3P,2���ֽ�д3����
x1 X (pixel, 0-254)
y1 Y (0-128)
Wid ͼƬ��� (ʵ������)
Hei ͼƬ�߶�
*/

void ST7529_Dispic(const char *pic, uint8_t x1, uint8_t y1, uint16_t wid, uint8_t hei)
{
	uint8_t col_s;  //ͼƬ��ʼ��
	uint8_t col_num;  //ͼƬ��ռ����
	uint8_t cols_rem;  //ͼƬ��ʼ������������ʼ�еڼ���������ʾ��
	uint8_t cole_rem;  //ͼƬ��β����������β�в�����أ�
	uint8_t i, j, k;
	uint8_t tem, w_rem;
	uint16_t p;

	ST7529_DrawPix(0xe0); //��λ
	
	w_rem=wid%8;
	
	//���ʵ������(ÿ���������أ�
	col_s=x1/3;		
	cols_rem=x1%3;
	cole_rem=(wid+cols_rem)%3;				//ͼƬ��β���ص�������λ��
	if (cole_rem!=0)									//����պ����������һ�㣨��������
		{
			col_num=(wid+cols_rem)/3+1;
			cole_rem=3-cole_rem;					//����㵽���һ��β
		}
	else 
		col_num=(wid+cols_rem)/3;
		
	
	Write_CMD(0x30);		//EXT=0
	Write_CMD(0X15);		//�����е�ַ��ָ��
	Write_Data(col_s);			//������ʼ��
	Write_Data(col_s+col_num-1);		//������ֹ��
	Write_CMD(0X75);		//�����е�ַ��ָ��
	Write_Data(y1+16);		//������ʼ
	Write_Data(y1+15+hei);		//������ֹ��
	Write_CMD(0x5c);		//�������Դ�д����

	p=0;
	for (i=0;i<hei;i++)
	{
		//�����ʼ�㲻��������һ�е����
		for (j=0;j<cols_rem;j++)
			ST7529_DrawPix(0xff);
		
		for (j=0;j<wid/8;j++)
		{
			tem=pic[p];
			p++;
			for (k=0;k<8;k++)
			{
				if((tem&0x01)==0x01)
					ST7529_DrawPix(0x00);
				else
					ST7529_DrawPix(0xff);
				tem>>=1;	
			}
		}	
		//���ÿ�е���/8��Ϊ��;
		if (w_rem>0)
		{
			tem=pic[p];
			p++;
			for (k=0;k<w_rem;k++)
			{
				if((tem&0x01)==0x01)
					ST7529_DrawPix(0x00);
				else
					ST7529_DrawPix(0xff);
				tem>>=1;	
			}			
		}
		//�����������д��0;
		if (cole_rem>0)
		{
			for (j=0;j<cole_rem;j++)
				ST7529_DrawPix(0xff);
		}	
	}
}

/*
	2B3Pд��ÿ������д��ST7529һ�Ρ�dataΪҪд�ĵ㡣
	���DATAΪ0xe0, ��P=0
*/
void ST7529_DrawPix(uint8_t data)
{
	static uint8_t tem[3]={0,0,0};
	static uint8_t p=0;
	uint8_t w[2];
	
	if (data==0xe0)
	{
		p=0;
		return;
	}
	
	tem[p]=data;
	p++;		
	if (p>2)
	{
		w[0]=tem[0]<<3|((tem[1]>>2)&0x07);
		w[1]=tem[1]<<6|(tem[2]&0x1f);
		Write_Data(w[0]);
		Write_Data(w[1]);
		p=0;
	}
	
}
