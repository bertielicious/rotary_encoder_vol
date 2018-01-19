/*
 * File:   main.c
 * Author: philip
 *
 * Created on 14 January 2018, 18:30
 */


#include <xc.h>
#include "config.h"
#include "init_ports.h"
#include "ioc_enable.h"
#include "set_usart.h"
#include "transmit_character.h"
#include "transmit_data.h"
#include <stdio.h>
#include "putch.h"
#include "debounce_a.h"
#include "debounce_b.h"
#include "interrupt isr.h"

void main(void) 
{
    init_ports();
    set_usart();
    char ton[] = " 100 step volume control demo\n";
    transmit_character(&ton[0]);
    printf( "audio_project\n");
    count = 0;
    previous_count = 0;
    ioc_enable();
    
    
    while(1)
    {
       
    } 
    
}
