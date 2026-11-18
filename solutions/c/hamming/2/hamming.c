#include "hamming.h"
#include <stddef.h>

int compute(const char *lhs, const char *rhs) {
  int count = 0;
  size_t i = 0;

  while (lhs[i] != '\0' && rhs[i] != '\0') {
    if (lhs[i] != rhs[i]) {
      count++;
    }

    i++;
  }

  if (lhs[i] != rhs[i]) { // one is at '\0' while the other is not
    return -1;
  }

  return count;
}