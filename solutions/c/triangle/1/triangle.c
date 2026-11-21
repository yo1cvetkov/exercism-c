#include "triangle.h"

static bool is_triangle(triangle_t t) {
  return t.a > 0 && t.b > 0 && t.c > 0 &&
         t.a + t.b >= t.c &&
         t.b + t.c >= t.a &&
         t.a + t.c >= t.b;
}

bool is_equilateral(triangle_t sides) {
  return is_triangle(sides) && sides.a == sides.b && sides.b == sides.c;
}

bool is_isosceles(triangle_t sides) {
  return is_triangle(sides) && (sides.a == sides.b || sides.b == sides.c || sides.a == sides.c);
}

bool is_scalene(triangle_t sides) {
  return is_triangle(sides) && !is_isosceles(sides);
}