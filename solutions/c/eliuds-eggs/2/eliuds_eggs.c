#include "eliuds_eggs.h"



unsigned int egg_count(unsigned int decimal) {
  unsigned int eggs = 0;

  while (decimal > 0) {
    if (decimal % 2 == 1) {
      eggs++;
    }
    decimal /= 2;
  }

  return eggs;
}
