#include "darts.h"
#include <stdlib.h>
#include <math.h>

uint8_t score(coordinate_t landing_position) {
  float distance = sqrt(fabsf(landing_position.x * landing_position.x) + fabsf(landing_position.y * landing_position.y));
  
  if (distance > 10) {
    return 0;
  } else if (distance > 5)  {
    return 1;
  } else if (distance > 1) {
    return 5;
  } else {
    return 10;
  }
}
