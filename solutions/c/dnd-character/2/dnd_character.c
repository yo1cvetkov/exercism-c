#include "dnd_character.h"
#include <stdlib.h>
#include <math.h>

int ability(void) {
  int sum = 0;
  int lowest = 6;

  for (int i = 0; i < 4; i++) {
    int roll = rand() % 6 + 1;
    sum += roll;
    if (roll < lowest) {
      lowest = roll;
    }
  }

  return sum - lowest;
}

int modifier(int score) {
  return (int) floor((score - 10) / 2.0);
}

dnd_character_t make_dnd_character(void) {
  dnd_character_t hero;

  hero.strength = ability();
  hero.dexterity = ability();
  hero.constitution = ability();
  hero.intelligence = ability();
  hero.wisdom = ability();
  hero.charisma = ability();
  
  hero.hitpoints = modifier(hero.constitution) + 10;

  return hero;
}
