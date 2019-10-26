/*
 * counter.c
 *
 *  Created on: 12 Jun 2019
 *      Author: dixit
 */

#include"counter.h"
#include"main.h"

void counter()
{
    displayScrollText("COUNTING MODE");
    *S1buttonDebounce = 0;
    *S2buttonDebounce = 0;

    // Check if any button is pressed
        Timer_A_initUpMode(TIMER_A0_BASE, &initUpParam_A0);
        __bis_SR_register(LPM3_bits | GIE);         // enter LPM3

}
