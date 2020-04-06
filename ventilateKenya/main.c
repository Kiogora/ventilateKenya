/*
 * ventilateKenya.c
 *
 * Created: 4/5/2020 1:32:10 PM
 * Author : itschumba
 */ 

#include <avr/io.h>
#include <stdio.h>

#include "alarms.h"
#include "disp.h"
#include "volCtrl.h"
#include "presCtrl.h"
#include "svxCtrl.h"


int main(void)
{
    
    printf("Test Build For Ventilate Kenya Firmware\n");
    int result = disp_testAddition(1,2);

    result += alarm_testAddition(3,4);
    result += svxCtrl_testAddition(5,6);
    result += volCtrl_testAddition(7,8);
    result += presCtrl_testAddition(9,10);

    printf("Sanity Check Result %i=\n", result);

    // Implement:
    //          - Initialization
    //          - State machine to control valves opening and closing

    while (1) 
    {
        ;
    }

    return 0;
}

