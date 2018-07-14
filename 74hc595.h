/**
 * Copyright (c) 2018, Łukasz Marcin Podkalicki <lpodkalicki@gmail.com>
 * 
 * This is ATtiny13/25/45/85 library for 74HC595 a shift register chip.
 */

#include <avr/io.h>

#define	SHIFT_REGISTER_DATA_PIN		(PB4)
#define	SHIFT_REGISTER_CLOCK_PIN	(PB3)


void shift_register(uint8_t value);

