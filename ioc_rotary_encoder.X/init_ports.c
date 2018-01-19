/*
 * File:   init_ports.c
 * Author: philip
 *
 * Created on 14 January 2018, 18:53
 */


#include <xc.h>
#include "init_ports.h"

void init_ports(void) 
{
    ANSEL = 0x00;   // ADC module off
    ANSELH = 0x00;
    CM1CON0 = 0x00; // Comparators off
    CM2CON0 = 0x00;
    TRISCbits.TRISC0 = 0;   // BLU_LED output pin 16
    TRISAbits.TRISA2 = 1;   //RA2 input pin 17
    TRISCbits.TRISC5 = 1;   // RC5 input pin 5
    TRISCbits.TRISC4 = 0;   // RED_LED output pin 6
    TRISCbits.TRISC3 = 0;   // GRN_LED output pin 7
    RED_LED = 0;
    GRN_LED = 0;
    BLU_LED = 0;
}
