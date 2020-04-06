/*
 * volCtrl.c
 *
 * Created: 4/5/2020 7:39:06 PM
 *  Author: itschumba
 */ 


#include "fmx.h"
#include "alarms.h"         // To trip alarms
#include "disp.h"           // Update display accordingly

int volCtrl_testAddition (int a, int b)
{
    return fmx_testAddition(a,b);
}

// Create FMx objects here e.g. FM1, FM2 etc