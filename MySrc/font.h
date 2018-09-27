#include "stm32f1xx_hal.h"

#define ASCII9X12 0
#define DIG40X60	1

#define DONG		HZ_12X12					//��
#define NAN			HZ_12X12+24*1		//��
#define XI			HZ_12X12+24*2		//��
#define BEI			HZ_12X12+24*3		//��
#define DIAN		HZ_12X12+24*4		//��
#define YA			HZ_12X12+24*5		//ѹ
#define LIU			HZ_12X12+24*6		//��
#define LIANG		HZ_12X12+24*7		//��
#define WEN			HZ_12X12+24*8		//��
#define DU 			HZ_12X12+24*9		//��
#define ZONG		HZ_12X12+24*10		//��
#define LI			HZ_12X12+24*11		//��
#define CHEN		HZ_12X12+24*12		//��
#define XU			HZ_12X12+24*13		//��
#define HANG		HZ_12X12+24*14		//��


extern uint8_t X, Y, FONT;
extern const char arrow[];
extern const char ruller[];
extern const char ASCII_9X12[];
extern const char HZ_12X12[];
extern const char DIG_40X60[];
extern const char Degree[];
extern const char ESWN[];

