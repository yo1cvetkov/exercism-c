#include "gigasecond.h"
#include <time.h>

void gigasecond(time_t input, char *output, size_t size) {
  time_t later = input + 1000000000;

  struct tm *utc = gmtime(&later);

  if (utc == NULL) {
    if (size > 0) {
      output[0] = '\0';
    }

    return;
  }

  strftime(output, size, "%Y-%m-%d %H:%M:%S", utc);
}