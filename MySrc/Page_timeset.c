#include "stm32f1xx_hal.h"
#include "page.h"
#include "ST7529.h"
#include <stdio.h>
#include "RotaryEncoder.h"

extern uint8_t BUTTON;	//��ǰ���µİ���

void timeset_init(void);
void timeset_loop(void);
void timeset_exit(void);


