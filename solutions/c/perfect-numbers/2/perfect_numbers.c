#include "perfect_numbers.h"

kind classify_number(int number) {
  if (number <= 0) {
    return ERROR;
  }

  long sum = 0;

  for (int i = 1; (long)i*i <= number; i++) { // divisors come in pairs - if i divides number so does number / i
    if (number % i == 0) {
      sum += i;
      int pair = number / i;
      if (pair != i) { // don't count a square root twice (e.g. 4*4 = 16)
        sum+=pair;
      }
    }
  }

  sum -= number; // the pair(1, number) added number itself, so remove the number

  if (number == sum) {
    return PERFECT_NUMBER;
  }

  if (number < sum) {
    return ABUNDANT_NUMBER;
  }

  return DEFICIENT_NUMBER;
}