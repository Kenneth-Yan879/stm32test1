//
// Created by Kenneth Yan on 2026/9/29.
//

#ifndef STM32TEST1_OLED_H
#define STM32TEST1_OLED_H

#endif //STM32TEST1_OLED_H
#ifndef __OLED_H
#define __OLED_H

#include "main.h"

void OLED_Init(void);
void OLED_Clear(void);
void OLED_ShowString(uint8_t x, uint8_t y, char *str);

#endif