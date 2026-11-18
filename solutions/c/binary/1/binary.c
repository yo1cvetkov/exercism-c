#include "binary.h"

int convert(const char *input) {
  int decimal = 0;

  for (const char *p = input; *p != '\0'; p++) {
    if (*p != '0' && *p != '1') {
      return INVALID;
    }

    decimal = decimal * 2 + (*p - '0');
  }

  return decimal;
}