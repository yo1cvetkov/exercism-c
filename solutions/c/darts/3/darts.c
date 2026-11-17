#include "darts.h"
#include <stdlib.h>
#include <math.h>

uint8_t score(coordinate_t landing_position) {
  float distance = hypot(landing_position.x, landing_position.y);
  
  if (distance <= 1.0f) {
    return 10;
  }

  if (distance <= 5.0f) {
    return 5;
  }

  if (distance <= 10.0f) {
    return 1;
  }

  return 0;
}
