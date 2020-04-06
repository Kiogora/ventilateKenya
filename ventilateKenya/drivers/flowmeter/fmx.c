/*
 * fmx.c
 *
 * Created: 4/5/2020 6:39:01 PM
 *  Author: itschumba
 */ 
#include "featureInclude.h"
#include "fmx.h"                // Access vol metrics


#include <stdio.h>
#include <string.h>
#include <inttypes.h>

#ifdef ENABLE_FLOWMETER
int fmx_testAddition(int a, int b)
{
    return (a+b);
}
#else
int fmx_testAddition(int a, int b)
{
    ;   // Do nothing
}
#endif // ENABLE_FLOWMETER