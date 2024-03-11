/* --COPYRIGHT--,BSD_EX
 * Copyright (c) 2015, Texas Instruments Incorporated
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * *  Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *
 * *  Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * *  Neither the name of Texas Instruments Incorporated nor the names of
 *    its contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
 * THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS;
 * OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR
 * OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
 * EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 *******************************************************************************
 * 
 *                       MSP430 CODE EXAMPLE DISCLAIMER
 *
 * MSP430 code examples are self-contained low-level programs that typically
 * demonstrate a single peripheral function or device feature in a highly
 * concise manner. For this the code may rely on the device's power-on default
 * register values and settings such as the clock configuration and care must
 * be taken when combining code from several examples to avoid potential side
 * effects. Also see www.ti.com/grace for a GUI- and www.ti.com/msp430ware
 * for an API functional library-approach to peripheral configuration.
 *
 * --/COPYRIGHT--*/
//******************************************************************************
//  MSP430FR5x9x Demo - Toggle P1.0 using software
//
//  Description: Toggle P1.0 using software.
//  ACLK = n/a, MCLK = SMCLK = default DCO
//
//           MSP430FR5994
//         ---------------
//     /|\|               |
//      | |               |
//      --|RST            |
//        |               |
//        |           P1.0|-->LED
//
//   William Goh
//   Texas Instruments Inc.
//   October 2015
//   Built with IAR Embedded Workbench V6.30 & Code Composer Studio V6.1
//******************************************************************************
#include <msp430.h>

#include <stdint.h>


#define MAX_SIZE 212984
#define MAX_SIZE2 48906

#pragma PERSISTENT(a)
#pragma PERSISTENT(b)

int8_t a[MAX_SIZE]= {0};
int8_t b[MAX_SIZE2] = {0};
int main(void)
{
    WDTCTL = WDTPW | WDTHOLD;               // Stop WDT
    /*
    // Configure GPIO
    P1OUT &= ~BIT0;                         // Clear P1.0 output latch for a defined power-on state
    P1DIR |= BIT0;                          // Set P1.0 to output direction

    PM5CTL0 &= ~LOCKLPM5;                   // Disable the GPIO power-on default high-impedance mode
                                            // to activate previously configured port settings




    /* -------------------- INTITAL TESTED CODE FOR ADDITION AND DIVISION -----------------------------
    volatile int a = 3, b=5;
    volatile int c = a/b;
    -----------------------------------------------------------------------------------------------------*/
    /*
    // Setup Timer_A
    TA0CTL = TASSEL_2 + MC_1; // SMCLK, Up mode (no input divider)
    TA0CCR0 = 16000; // Set the timer period for 1 ms (16 MHz / 16000 = 1 ms)

    // Start Timer_A
    TA0CTL |= TACLR; // Clear Timer_A
    TA0CTL |= MC_1;  // Start Timer_A in Up mode

    */
    uint8_t i=0;
    for(;i<MAX_SIZE;i++){
        a[i] = i;

      }
    i = 0;
    for (;i<MAX_SIZE2;i++){
        b[i] = i;
    }

    /*
    // PERFORMING ELEMENT WISE MULTIPLICATION NOW
    int j=0;
    for(;j<size;j++){
        c[j] = a[j]*b[j];
    }
    */





    // Stop Timer_A
    //TA0CTL &= ~MC_1; // Stop Timer_A

    // Calculate and print elapsed time
    //int elapsed_cycles = TA0R;

    //printf("The clock cycles required for size = %d are %d\n", MAX_SIZE, elapsed_cycles);

    //}


    /*
    // Assuming a 16 MHz system clock and a divide-by-8 prescaler
    float clockFrequency = 16000000.0;  // 16 MHz

    // Calculate the time period of one Timer_A count in seconds
    float timerPeriod = 1.0 / (clockFrequency);

    // Convert Timer_A counts to actual time in seconds
    float actualTimeInSeconds = elapsed_time * timerPeriod;

    printf("%d",actualTimeInSeconds);
    */
}
