/**
 * Copyright (c) 2018, Łukasz Marcin Podkalicki <lpodkalicki@gmail.com>
 * 
 * This is ATtiny13/25/45/85 library for shift register 74HC595.
 */

#include "74hc595.h"


void
shift_register(uint8_t value)
{
	uint8_t i;

	for (i = 0; i < 8; i++)  {
		if (value & (1 << (7 - i))) {
			PORTB |= _BV(SHIFT_REGISTER_DATA_PIN);
		} else {
			PORTB &= ~_BV(SHIFT_REGISTER_DATA_PIN);
		}
		PORTB |= _BV(SHIFT_REGISTER_CLOCK_PIN);
		PORTB &= ~_BV(SHIFT_REGISTER_CLOCK_PIN);
	}
}

