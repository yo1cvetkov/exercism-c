#include "space_age.h"

float age(planet_t planet, int64_t seconds) {
  switch(planet) {
    case MERCURY:
      return seconds / EARTH_YEAR_IN_SECONDS / 0.2408467;
    case VENUS:
      return seconds / EARTH_YEAR_IN_SECONDS / 0.61519726;
    case EARTH:
      return seconds / EARTH_YEAR_IN_SECONDS;
    case MARS:
      return seconds / EARTH_YEAR_IN_SECONDS / 1.8808158;
    case JUPITER:
      return seconds / EARTH_YEAR_IN_SECONDS / 11.862615;
    case SATURN:
      return seconds / EARTH_YEAR_IN_SECONDS / 29.447498;
    case URANUS:
      return seconds / EARTH_YEAR_IN_SECONDS / 84.016846;
    case NEPTUNE:
      return seconds / EARTH_YEAR_IN_SECONDS / 164.79132;
    default:
      return -1;
  }
}
