/*
 * psx.c
 *
 * Created: 4/5/2020 7:13:40 PM
 *  Author: itschumba
 */ 

#include "featureInclude.h"
#include "psx.h"

#include <stdio.h>
#include <string.h>
#include <inttypes.h>

#ifdef ENABLE_PRESSURE
int psx_testAddition(int a, int b)
{
    return (a+b);
}
#else
int psx_testAddition(int a, int b)
{
    return 0;
}
#endif // ENABLE_PRESSURE