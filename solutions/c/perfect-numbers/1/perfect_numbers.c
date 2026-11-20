#include "perfect_numbers.h"

kind classify_number(int number) {
  int aliquot_sum = 0;

  if (number <= 0) return ERROR;

  for (int i = 1; i < number; i++) {
    if (number % i == 0) {
      aliquot_sum += i;
    }
  }

  if (number == aliquot_sum) {
    return PERFECT_NUMBER;
  }

  if (number < aliquot_sum) {
    return ABUNDANT_NUMBER;
  }

  if (number > aliquot_sum) {
    return DEFICIENT_NUMBER;
  }

  return ERROR;
}