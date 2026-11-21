#include "armstrong_numbers.h"

static int int_pow(int base, int exp) 
{
   int result = 1;
   while (exp-- > 0) {
      result *= base;
   }

   return result;
}

bool is_armstrong_number(int candidate)
{
   if (candidate < 0) {
      return false;
   }

   int digits = 0;
   for (int i = candidate; i > 0; i /= 10) {
      digits++;
   }

   long sum = 0;
   for (int i = candidate; i > 0; i /= 10) {
      sum += int_pow(i % 10, digits);
   }

   return sum == candidate;
}
