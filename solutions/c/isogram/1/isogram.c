#include "isogram.h"
#include <ctype.h>
#include <stddef.h>

bool is_isogram(const char phrase[]) {
  if (phrase == NULL) return false;

  int lookup[26] = { 0 };

  for (size_t i = 0; phrase[i] != '\0'; i++) {
    unsigned char c = (unsigned char)phrase[i];

    if (isalpha(c)) {
      lookup[tolower(c) - 'a']++;
    }
  }

  for (size_t i = 0; i < 26; i++) {
    if (lookup[i] > 1) return false;
  }

  return true;
}
