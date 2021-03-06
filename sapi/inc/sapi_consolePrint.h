/* Copyright 2017, Eric Pernia.
 * All rights reserved.
 *
 * This file is part sAPI library for microcontrollers.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 * 3. Neither the name of the copyright holder nor the names of its
 *    contributors may be used to endorse or promote products derived from this
 *    software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */

/* Date: 2017-04-17 */

#ifndef _CONSOLE_PRINT_H_
#define _CONSOLE_PRINT_H_

/*==================[inclusions]=============================================*/

#include "sapi_print.h"

/*==================[cplusplus]==============================================*/

#ifdef __cplusplus
extern "C" {
#endif

/*==================[macros]=================================================*/

// Initialize
#define CONSOLE_PRINT_ENABLE                       static print_t consolePrint;
#define consolePrintSetUart(uart);                 printSetUart(&(consolePrint),(uart));
#define consolePrintConfigUart(uart,baudRate);     printConfigUart(&(consolePrint),(uart),(baudRate));

// Print String
#define consolePrintString(string);                printString((consolePrint),(string));
#define consolePrintEnter();                       printEnter(consolePrint);
#define consolePrintlnString(string);              printlnString((consolePrint),(string));

// Print Integer
#define consolePrintIntFormat(number,format);      printIntFormat((consolePrint),(number),(format));
#define consolePrintUIntFormat(number,format);     printUIntFormat((consolePrint),(number),(format));
#define consolePrintlnIntFormat(number,format);    printlnIntFormat((consolePrint),(number),(format));
#define consolePrintlnUIntFormat(number,format);   printlnUIntFormat((consolePrint),(number),(format));
#define consolePrintInt(number);                   printInt((consolePrint),(number));
#define consolePrintUInt(number);                  printUInt((consolePrint),(number));
#define consolePrintlnInt(number);                 printlnInt((consolePrint),(number));
#define consolePrintlnUInt(number);                printlnUInt((consolePrint),(number));
#define consolePrintHex(number,bitSize);           printHex((consolePrint),(number),(bitSize));
#define consolePrintlnHex(number,bitSize);         printlnHex((consolePrint),(number),(bitSize));

/*==================[typedef]================================================*/

/*==================[external data declaration]==============================*/

/*==================[external functions declaration]=========================*/

/*==================[cplusplus]==============================================*/

#ifdef __cplusplus
}
#endif

/*==================[end of file]============================================*/
#endif /* #ifndef _CONSOLE_PRINT_H_ */
