/*
  pins_arduino.h - Pin definition functions for Arduino
  Part of Arduino - http://www.arduino.cc/

  Copyright (c) 2007 David A. Mellis
  Modified for ESP8266 platform by Ivan Grokhotkov, 2014-2015.
  Modified for TSOC-ESP8266 platform by PatternAgents, 2016.
  
  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General
  Public License along with this library; if not, write to the
  Free Software Foundation, Inc., 59 Temple Place, Suite 330,
  Boston, MA  02111-1307  USA

  $Id: wiring.h 249 2007-02-03 16:52:51Z mellis $
*/

#ifndef TSOC_ESP8266
#define TSOC_ESP8266  1
#endif

#ifndef Pins_Arduino_h
#define Pins_Arduino_h

#define EXTERNAL_NUM_INTERRUPTS 16
#define NUM_DIGITAL_PINS        34
#define NUM_ANALOG_INPUTS       1

#define analogInputToDigitalPin(p)  ((p > 0)?NOT_A_PIN:0)
#define digitalPinToInterrupt(p)  	(((p) < EXTERNAL_NUM_INTERRUPTS)?p:NOT_A_PIN)
#define digitalPinHasPWM(p)         (((p) < NUM_DIGITAL_PINS)?p:NOT_A_PIN)
static const uint8_t SLOT_RXD          =  0;
static const uint8_t SLOT_TXD          =  2;
static const uint8_t SDA               =  4;
static const uint8_t SCL               =  5;
static const uint8_t MISO              = 12;
static const uint8_t MOSI              = 13;
static const uint8_t SCK               = 14;
static const uint8_t SS                = 15;
static const uint8_t A0                = 17;
static const uint8_t SLOT_CTS          = 18;
static const uint8_t SLOT_RTS          = 19;
static const uint8_t SLOT_DTR          = 20;
static const uint8_t SLOT_DSR          = 21;
static const uint8_t SLOT_DCD          = 22;
static const uint8_t SLOT_RI           = 23;
static const uint8_t SLOT_IO1          = 24;
static const uint8_t SLOT_IO2          = 25;
static const uint8_t SLOT_SS2          = 26;
static const uint8_t SLOT_SS1          = 27;
static const uint8_t SLOT_IRQ          = 28;
static const uint8_t SLOT_ATN          = 29;
static const uint8_t BUILTIN_LED       = 30;
static const uint8_t SLOT_RED          = 30;
static const uint8_t SLOT_GREEN        = 31;
static const uint8_t SLOT_BLUE         = 32;
static const uint8_t SLOT_EN           = 33;




// These serial port names are intended to allow libraries and architecture-neutral
// sketches to automatically default to the correct port name for a particular type
// of use.  For example, a GPS module would normally connect to SERIAL_PORT_HARDWARE_OPEN,
// the first hardware serial port whose RX/TX pins are not dedicated to another use.
//
// SERIAL_PORT_MONITOR        Port which normally prints to the Arduino Serial Monitor
//
// SERIAL_PORT_USBVIRTUAL     Port which is USB virtual serial
//
// SERIAL_PORT_LINUXBRIDGE    Port which connects to a Linux system via Bridge library
//
// SERIAL_PORT_HARDWARE       Hardware serial port, physical RX & TX pins.
//
// SERIAL_PORT_HARDWARE_OPEN  Hardware serial ports which are open for use.  Their RX & TX
//                            pins are NOT connected to anything by default.
#define SERIAL_PORT_MONITOR        Serial
#define SERIAL_PORT_USBVIRTUAL     Serial
#define SERIAL_PORT_HARDWARE       Serial
#define SERIAL_PORT_HARDWARE_OPEN  Serial

#endif /* Pins_Arduino_h */
