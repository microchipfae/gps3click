/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description
    This header file provides APIs for driver for .
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.65.2
        Device            :  PIC16F15345
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 1.45
        MPLAB 	          :  MPLAB X 4.15	
*/

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/

#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set IO_RA4_RST aliases
#define IO_RA4_RST_TRIS                 TRISAbits.TRISA4
#define IO_RA4_RST_LAT                  LATAbits.LATA4
#define IO_RA4_RST_PORT                 PORTAbits.RA4
#define IO_RA4_RST_WPU                  WPUAbits.WPUA4
#define IO_RA4_RST_OD                   ODCONAbits.ODCA4
#define IO_RA4_RST_ANS                  ANSELAbits.ANSA4
#define IO_RA4_RST_SetHigh()            do { LATAbits.LATA4 = 1; } while(0)
#define IO_RA4_RST_SetLow()             do { LATAbits.LATA4 = 0; } while(0)
#define IO_RA4_RST_Toggle()             do { LATAbits.LATA4 = ~LATAbits.LATA4; } while(0)
#define IO_RA4_RST_GetValue()           PORTAbits.RA4
#define IO_RA4_RST_SetDigitalInput()    do { TRISAbits.TRISA4 = 1; } while(0)
#define IO_RA4_RST_SetDigitalOutput()   do { TRISAbits.TRISA4 = 0; } while(0)
#define IO_RA4_RST_SetPullup()          do { WPUAbits.WPUA4 = 1; } while(0)
#define IO_RA4_RST_ResetPullup()        do { WPUAbits.WPUA4 = 0; } while(0)
#define IO_RA4_RST_SetPushPull()        do { ODCONAbits.ODCA4 = 0; } while(0)
#define IO_RA4_RST_SetOpenDrain()       do { ODCONAbits.ODCA4 = 1; } while(0)
#define IO_RA4_RST_SetAnalogMode()      do { ANSELAbits.ANSA4 = 1; } while(0)
#define IO_RA4_RST_SetDigitalMode()     do { ANSELAbits.ANSA4 = 0; } while(0)

// get/set RB5 procedures
#define RB5_SetHigh()            do { LATBbits.LATB5 = 1; } while(0)
#define RB5_SetLow()             do { LATBbits.LATB5 = 0; } while(0)
#define RB5_Toggle()             do { LATBbits.LATB5 = ~LATBbits.LATB5; } while(0)
#define RB5_GetValue()              PORTBbits.RB5
#define RB5_SetDigitalInput()    do { TRISBbits.TRISB5 = 1; } while(0)
#define RB5_SetDigitalOutput()   do { TRISBbits.TRISB5 = 0; } while(0)
#define RB5_SetPullup()             do { WPUBbits.WPUB5 = 1; } while(0)
#define RB5_ResetPullup()           do { WPUBbits.WPUB5 = 0; } while(0)
#define RB5_SetAnalogMode()         do { ANSELBbits.ANSB5 = 1; } while(0)
#define RB5_SetDigitalMode()        do { ANSELBbits.ANSB5 = 0; } while(0)

// get/set IO_RC6_FORCE aliases
#define IO_RC6_FORCE_TRIS                 TRISCbits.TRISC6
#define IO_RC6_FORCE_LAT                  LATCbits.LATC6
#define IO_RC6_FORCE_PORT                 PORTCbits.RC6
#define IO_RC6_FORCE_WPU                  WPUCbits.WPUC6
#define IO_RC6_FORCE_OD                   ODCONCbits.ODCC6
#define IO_RC6_FORCE_ANS                  ANSELCbits.ANSC6
#define IO_RC6_FORCE_SetHigh()            do { LATCbits.LATC6 = 1; } while(0)
#define IO_RC6_FORCE_SetLow()             do { LATCbits.LATC6 = 0; } while(0)
#define IO_RC6_FORCE_Toggle()             do { LATCbits.LATC6 = ~LATCbits.LATC6; } while(0)
#define IO_RC6_FORCE_GetValue()           PORTCbits.RC6
#define IO_RC6_FORCE_SetDigitalInput()    do { TRISCbits.TRISC6 = 1; } while(0)
#define IO_RC6_FORCE_SetDigitalOutput()   do { TRISCbits.TRISC6 = 0; } while(0)
#define IO_RC6_FORCE_SetPullup()          do { WPUCbits.WPUC6 = 1; } while(0)
#define IO_RC6_FORCE_ResetPullup()        do { WPUCbits.WPUC6 = 0; } while(0)
#define IO_RC6_FORCE_SetPushPull()        do { ODCONCbits.ODCC6 = 0; } while(0)
#define IO_RC6_FORCE_SetOpenDrain()       do { ODCONCbits.ODCC6 = 1; } while(0)
#define IO_RC6_FORCE_SetAnalogMode()      do { ANSELCbits.ANSC6 = 1; } while(0)
#define IO_RC6_FORCE_SetDigitalMode()     do { ANSELCbits.ANSC6 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/