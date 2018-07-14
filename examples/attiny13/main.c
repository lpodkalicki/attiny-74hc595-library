/**
 * Copyright (c) 2018, Łukasz Marcin Podkalicki <lpodkalicki@gmail.com>
 *
 * This is ATtiny13 "Light Bar" example using attiny-74hc595-library,
 * https://github.com/lpodkalicki/attiny-74hc595-library .
 */

#include <stdint.h>
#include <util/delay.h>
#include "74hc595.h"


int
main(void)
{
	uint8_t i = 0;

	/* loop */
	while (1) {
		for (i = 0; i <= 8; ++i) {
			shift_register((1 << i) - 1);
			_delay_ms(100);
		}
	}
}
