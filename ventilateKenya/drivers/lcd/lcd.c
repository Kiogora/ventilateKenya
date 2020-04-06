/*
 * lcd.c
 *
 * Created: 4/5/2020 1:42:24 PM
 *  Author: itschumba -- copied from https://www.digikey.com/en/maker/projects/interface-an-lcd-with-an-arduino/8a651eb37e364fd59dee8f8caf247dc2
 */ 


#include "featureInclude.h"
#include "lcd.h"

#include <stdio.h>
#include <string.h>
#include <inttypes.h>

#ifdef ENABLE_LCD_16_x_2
int lcd_testAddition(int a, int b)
{
    return (a+b);
}
#else
int lcd_testAddition(int a, int b)
{
    return 0;
}

#endif // ENABLE_LCD_16_x_2

