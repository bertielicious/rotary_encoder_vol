/*
 * File:   interrupt isr.c
 * Author: philip
 *
 * Created on 14 January 2018, 19:38
 */


#include <xc.h>
#include "interrupt isr.h"
#include "config.h"
#include <stdio.h>


void interrupt isr(void) 
{
    if(INTCONbits.INTF == 1)
    {
        if(CLK == hi)
        { 
            count++;    
        }
        else
        {
            count--;
        }
        
    if (count >= COUNT_MAX)
    {
        count = COUNT_MAX;
    }
    if(count <= COUNT_MIN)
    {
        count = COUNT_MIN;
    }
        if(previous_count != count)
        {
            printf("volume position = %d\n", count);  // display latest value of count via serial monitor
        }
        BLU_LED = ~BLU_LED;
        previous_count = count;
    }
    INTCONbits.INTF = 0;
}