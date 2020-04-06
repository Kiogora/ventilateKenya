/*
 * buzzer.c
 *
 * Created: 4/5/2020 7:40:12 PM
 *  Author: itschumba
 */ 

#include "featureInclude.h"
#include "buzzer.h"

#include <stdio.h>
#include <string.h>
#include <inttypes.h>

#ifdef ENABLE_BUZZER
int buzzer_testAddition (int a, int b)
{
    return (a+b);
}
#else
int buzzer_testAddition (int a, int b)
{
    return 0;
}
#endif

