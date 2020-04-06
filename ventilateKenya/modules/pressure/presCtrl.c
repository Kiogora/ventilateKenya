/*
 * presCtrl.c
 *
 * Created: 4/5/2020 8:27:02 PM
 *  Author: itschumba
 */ 


#include "presCtrl.h"
#include "psx.h"
#include "alarms.h"         // To trip alarms
#include "disp.h"           // Update display accordingly

int presCtrl_testAddition (int a, int b)
{
    return psx_testAddition(a,b);
}

// Create PS1, PS2 objects here