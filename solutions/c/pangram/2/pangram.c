#include "pangram.h"
#include <ctype.h>
#include <stddef.h>

bool is_pangram(const char *sentence) {
  if (sentence == NULL) return false;

  bool lookup[26] = { false };

  for (size_t i = 0; sentence[i] != '\0'; i++) {
    unsigned char c = (unsigned char)sentence[i];

    if (isalpha(c)) {
      lookup[tolower(c) - 'a'] = true;
    }
  }

  for (int i = 0; i < 26; i++) {
    if (!lookup[i]) return false;
  }

  return true;
}