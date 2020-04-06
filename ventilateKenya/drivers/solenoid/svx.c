/*
 * svx.c
 *
 * Created: 4/5/2020 6:52:02 PM
 *  Author: itschumba
 */ 
#include "featureInclude.h"
#include "svx.h"

#include <stdio.h>
#include <string.h>
#include <inttypes.h>

#ifdef ENABLE_SOLENOID_CTRL
int svx_testAddition(int a, int b)
{
    return (a+b);
}
#else
int svx_testAddition(int a, int b)
{
    return 0;
}
#endif
