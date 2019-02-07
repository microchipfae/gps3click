# PIC16F15345 - Using GPS(3) Click Board

 [![MIT license](http://img.shields.io/badge/license-MIT-brightgreen.svg)](http://opensource.org/licenses/MIT)

## Description

Basic setup for the `Microchip PIC16 UART` and the `GPS3 Click`

* [License Agreement](#license-agreement)

### Environment

* [MPLABX v5.05](https://www.microchip.com/mplab/mplab-x-ide) - IDE From Microchip 
* [XC8 v2.05](https://www.microchip.com/mplab/compilers) - C-Compiler
* MCC v3.66 - MPLABX Plug-in
* [Curiosity Board](https://www.microchip.com/DevelopmentTools/ProductDetails/PartNO/DM164137) - Main board.
* [PIC16F15345](https://www.microchip.com/wwwproducts/en/PIC16F15345) - 8-bit microprocessor
* [GPS3 Click Board](https://www.mikroe.com/gps-3-click/) - MikroElectronika Click Module
* [Logic Analyzer](https://www.saleae.com/)
* Host: `Ubuntu 16.04` - Development PC used but, project should be compatible on WIN/MAC too.

> mikroBUS

|                    |                    |
|--------------------|--------------------|
| 1 - RC2            | 16 -               |
| 2 - RA4 (RESET)    | 15 -               |
| 3 - RC6 (FORCE ON) | 14 - RB5 (TX)      |
| 4 -                | 13 - RB7 (RX)      |
| 5 -                | 12 -               |
| 6 -                | 11 -               |
| 7 -                | 10 -               |
| 8 - GND            | 9  -               |

```text
Note:
RB5 is GPS3-Module-TX <-> PIC-UART1-RX
RB7 is GPS3-Module-RX <-> PIC-UART1-TX
```

> UART-1 (9600,n,8,1)

Notes:

* Open the **MCC** plug-in to see part configuration.
* GPS3 Module's Reset is `active-LOW`.
* GPS3 Module's `FORCE ON` is set: `HIGH`
* `$GPGSV` is captured (only): Proof-of-concept.

`Todo`

* Complete capture of entire NMEA Signature to complete example.
* Re-write state machine to make it more versitle/efficient. 
* Measure current draw. Is USB power sufficent here?

>  
> ## **END**  
>  

### HISTORY

* 0.0.1 - Initial release.
 
### LICENSE AGREEMENT

### **`The MIT License`**

Copyright (c) 2019 [microchipfae](https://github.com/microchipfae)

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
