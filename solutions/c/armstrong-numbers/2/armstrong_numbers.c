#include "armstrong_numbers.h"
#include <math.h>


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
      sum += pow(i % 10, digits);
   }

   return sum == candidate;
}
