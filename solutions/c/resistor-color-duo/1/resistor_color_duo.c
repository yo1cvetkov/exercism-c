#include "resistor_color_duo.h"
#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>

uint16_t color_code(resistor_band_t *colors) {
  uint16_t value = 0;

  for (int i = 0; i < 2; i++) {
    value = value * 10 + colors[i];
  }

  return value;
}
