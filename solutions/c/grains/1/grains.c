#include "grains.h"
#include "math.h"


uint64_t square(uint8_t index) {

  if(index < 0 || index > 64) return 0;

  return pow(2, index - 1);
}


uint64_t total(void) {

  uint64_t sum = 0;

  for (uint64_t i = 1; i <= 64; i++) {
    sum = sum + square(i);
  }

  return sum;
}