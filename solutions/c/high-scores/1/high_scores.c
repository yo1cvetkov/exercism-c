#include "high_scores.h"


/// Return the latest score.
int32_t latest(const int32_t *scores, size_t scores_len) {
  return scores[scores_len - 1];
}

/// Return the highest score.
int32_t personal_best(const int32_t *scores, size_t scores_len) {
  int32_t best = 0;
  for (size_t i = 0; i < scores_len; i++) {
    if(scores[i] > best) {
      best = scores[i];
    }
  }
  return best;
}

/// Write the highest scores to `output` (in non-ascending order).
/// Return the number of scores written.
size_t personal_top_three(const int32_t *scores, size_t scores_len, int32_t *output) {
  size_t count = 0;

  for (size_t i = 0; i < scores_len; i++) {
    int32_t s = scores[i];

    if (count < 3) {
      count++;
    } else if (s <= output[2]) {
      continue;
    }

    size_t j = count - 1;
    while (j > 0 && output[j - 1] < s) {
      output[j] = output[j - 1];
      j--;
    }

    output[j] = s;
  }

  return count;
}