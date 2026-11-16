#include "resistor_color.h"
#include <stdio.h>
#include <stdlib.h>

unsigned int color_code(resistor_band_t color) {
  return (unsigned int)color;
}
resistor_band_t *colors(void) {
  resistor_band_t *arr = malloc(sizeof(resistor_band_t) * 10);

  if (arr == NULL) return NULL;

  resistor_band_t first_color = BLACK;

  for (int i = 0; i < 10; i++) {
    arr[i] = first_color + i;
  }

  return arr;
}
