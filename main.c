// *****************************************************************************
// * 
// * Basic UART Functionality using PIC16F15345 & GPS3 click
// *
// *****************************************************************************
// * MPLABX v5.05
// * XC8    v2.05
// * MCC    v3.66
// * Curiosity Development Board:  Part Number: DM164137
// * PIC16F15345
// * GPS3 Click:  https://www.mikroe.com/gps-3-click 
// *
// * Host:  Ubuntu 16.04
// ***************************************************************************** 

// -----------------------------------------------------------------------------
// 
// Baud: 9600
// TX:   RB7
// RX:   RB5
//
// mikroBUS
//
// 1-RC2                 16-
// 2-RA4 (RESET)         15-
// 3-RC6 (FORCE ON)      14-RB5/RX (TX)
// 4-                    13-RB7/TX (RX)
// 5-
// 6-
// 7-
// 8-GND
// -----------------------------------------------------------------------------


// -----------------------------------------------------------------------------
// INCLUDES
// -----------------------------------------------------------------------------

#include "mcc_generated_files/mcc.h"

// -----------------------------------------------------------------------------
// GLOBALS (~ easy debugging)
// -----------------------------------------------------------------------------

unsigned char g_gpGLL[80];
unsigned char g_gpIndex;

// -----------------------------------------------------------------------------
// FUNCTION PROTOTYPES
// -----------------------------------------------------------------------------

bool packetBuilder(unsigned char packet);


// /////////////////////////////////////////////////////////////////////////////
// PROGRAM ENTRY
// /////////////////////////////////////////////////////////////////////////////
void main(void) {
     
    SYSTEM_Initialize();

    // When using interrupts, you need to set the Global and Peripheral Interrupt Enable bits
    // Use the following macros to:

    // Enable the Global Interrupts
    //INTERRUPT_GlobalInterruptEnable();

    // Enable the Peripheral Interrupts
    //INTERRUPT_PeripheralInterruptEnable();

    // Disable the Global Interrupts
    //INTERRUPT_GlobalInterruptDisable();

    // Disable the Peripheral Interrupts
    //INTERRUPT_PeripheralInterruptDisable();

    // Configure GPS Module.
    NOP();
    NOP();
    IO_RC6_FORCE_SetHigh();
    IO_RA4_RST_SetHigh();
    NOP();
    NOP();
    
    while (1) {

        NOP();
        NOP();
        if (EUSART1_is_rx_ready()) {
            NOP();
            NOP();
            if (packetBuilder((uint8_t) EUSART1_Read())) {
     			// #PACKET_COMPLETE true
                NOP();
                NOP();
                NOP();
            }
            
        } // END: if (EUSART1_is_rx_ready()

    } // END: while(1)

} // END: void main(void)


// =============================================================================
//  Function Name: packetBuilder
//  Description:   Simple example to search for valid packet header.
//  Inputs:        steam-character to evaluate.
//  Returns:       true, if found
// =============================================================================
// Example Format:
//  $GPGLL,3751.65,S,14507.36,E*77
//  $GPGLL,4916.45,N,12311.12,W,225444,A
//  $GPGLL,4916.45,N,12311.12,W,225444,A,*1D\r\n"
bool packetBuilder(unsigned char data) {

    static unsigned int packetState = 0;

    switch (packetState) {

        case 0:
            if ('$' == data) {
                g_gpGLL[packetState++] = data;
            }
            break;

        case 1:
            if ('G' == data) {
                g_gpGLL[packetState++] = data;
            } else {
                packetState = 0;
            }
            break;
        case 2:
            if ('P' == data) {
                g_gpGLL[packetState++] = data;
            } else {
                packetState = 0;
            }
            break;
        case 3:
            if ('G' == data) {
                g_gpGLL[packetState++] = data;
            } else {
                packetState = 0;
            }
            break;
        case 4:
            if ('S' == data) {
                g_gpGLL[packetState++] = data;
              } else {
                packetState = 0;
            }
            break;
       case 5:
            if ('V' == data) {
                g_gpGLL[packetState++] = data;
                packetState = 0;
                return true;
            } else {
                packetState = 0;
            }
            break;
        case 6: // TODO: build remaining pacet capture ...
            break;

        default:
            packetState = 0;


    } //END: switch (packetState)

    return false;

} // END:  bool packetBuilder(unsigned char data) {


