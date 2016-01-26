/*  TSOC-ESP8266 Variant
    Copyright (C) 2016 PatternAgents, LLC

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

// Support for TSOC-ESP8266 expansion GPIO
// PCF8575 is mapped to Arduino pins 18-33

#include <twi.h>
#include "pins_arduino.h"

extern "C" void __pinMode(uint8_t pin, uint8_t mode);
extern "C" void __digitalWrite(uint8_t pin, uint8_t val);
extern "C" int  __digitalRead(uint8_t pin);

static const uint8_t ADDRESS = 0x20;
static volatile uint16_t gpio = 0xF000;

extern "C" void initVariant(void)
{
    twi_init(SDA, SCL);
    digitalWrite(SLOT_EN, HIGH);
}

extern "C" void pinMode(uint8_t pin, uint8_t mode)
{
    if (pin < 18 || pin > 33 ) {
        return __pinMode(pin, mode);
    }
    switch (mode) {
    case INPUT:
        digitalWrite(pin, LOW);
        break;
    case INPUT_PULLUP:
        digitalWrite(pin, HIGH);
        break;
    default:
        break;
    }
}

extern "C" void digitalWrite(uint8_t pin, uint8_t value)
{
    if (pin < 18 || pin > 33 ) {
        return __digitalWrite(pin, value);
    }
    pin -= 18;
    if (value)
        gpio |= (1 << pin);
    else
        gpio &= ~(1 << pin);
    twi_writeTo(ADDRESS, (unsigned char*)&gpio, 2, true);
}

extern "C" int digitalRead(uint8_t pin) {
    if (pin < 18 || pin > 33 ) {
        return __digitalRead(pin);
    }
    pin -= 18;
    uint16_t buf;
    twi_readFrom(ADDRESS, (unsigned char*)&buf, 2, true);    
    return (buf & (1 << pin)) ? HIGH : LOW;
}
