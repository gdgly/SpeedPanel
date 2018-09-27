#include "stm32f1xx_hal.h"
#include "RotaryEncoder.h"

//����ֵ
uint8_t BUTTON=NO_ACT;

//��ʱ����
void Dithering(void)
{
	uint16_t tim=100;
	while(tim--);
	
}

void RE_call(uint16_t GPIO_Pin)
{
	static uint8_t status=0;	
	//����
	
	Dithering();	
	//�����15���ж�
	if (HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_15)==GPIO_PIN_RESET)
	{
		BUTTON=PUSH_BUTTON;
		return;
	}


	//�����11���жϣ������ӻ��½���
	if ((HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_11)==GPIO_PIN_RESET)&&(status==1)) //����½����ж�
	{
		if (HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_12)==GPIO_PIN_SET)
			BUTTON=TURN_CW;
		else
			BUTTON=TURN_CCW;
	}
	
	if ((HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_11)==GPIO_PIN_SET)&&(status==0)) //����������ж�
	{
		if (HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_12)==GPIO_PIN_SET)
			BUTTON=TURN_CCW;
		else
			BUTTON=TURN_CW;
	}
	//�����ж�ǰ11��״̬
	status=HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_11);
	
}

