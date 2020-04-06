/*
 * disp.c
 *
 * Created: 4/5/2020 7:19:42 PM
 *  Author: itsch
 */ 


#include "disp.h"
#include "lcd.h"

int disp_testAddition (int a, int b)
{
    return lcd_testAddition(a,b);
}

// Create LCD object here