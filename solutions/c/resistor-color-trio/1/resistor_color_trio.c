#include "resistor_color_trio.h"
#include <stdint.h>

resistor_value_t color_code(resistor_band_t *colors) {
  uint64_t ohms = colors[0] * 10 + colors[1];

  int zeros = colors[2];

  for(int i = 0; i < zeros; i++) {
    ohms *= 10;
  }

  unit_t unit = OHMS;

  while(ohms >= 1000 && ohms % 1000 == 0 && unit < GIGAOHMS) {
    ohms /= 1000;
    unit++;
  }

  return (resistor_value_t){ .value = (uint16_t)ohms, .unit = unit};
}