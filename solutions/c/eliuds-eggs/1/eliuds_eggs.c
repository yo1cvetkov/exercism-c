#include "eliuds_eggs.h"



unsigned int egg_count(int decimal) {
  if (decimal <= 0) {
    return 0;
  }

  int binary[32];
  int i = 0;

  while (decimal > 0) {
    binary[i] = decimal % 2;
    decimal /= 2;
    i++;
  }

  int eggs = 0;

  for (int j = i - 1; j >= 0; j--) {
    if(binary[j] == 1) {
      eggs++;
    }
  }

  return eggs;
}
