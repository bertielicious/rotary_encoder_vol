/*
 * File:   putch.c
 * Author: philip
 *
 * Created on 04 January 2018, 11:02
 */


#include <xc.h>
#include "config.h"
#include "putch.h"
#include <stdio.h>
#include <stdarg.h>
void putch(char byte)
{
 while( ! TXIF)
 continue;
 TXREG = byte;
}
