/*




*/
#include "stm32f1xx_hal.h"

#ifndef __page			//�Է��ظ�����
#define __page
//ҳ�����Ͷ��� 
typedef struct 
{
	uint8_t Page_id;		//ҳ���
	void (*PageInit)(void); 	//ҳ����ں���
	void (*PageLoop)(void);		//ҳ����ѭ��
	void (*PageExit)(void);		//�ر�ҳ��
	
}	PageTypeDef;

typedef struct 
{
	uint8_t MItemId;		//
	uint8_t PosX;				//X����
	uint8_t PosY;
	char *s;					//Ҫ��ʾ���ַ���
	uint8_t language;		//��ʾ���Ļ���Ӣ��
	void (*HandleButton) (void);
		
} MenuItemTypeDef;

void DrawMenu(MenuItemTypeDef *Menuitem);
void ItemGetFocus(uint8_t itemno);
void ItemLostFocus(uint8_t itemno);

#endif

