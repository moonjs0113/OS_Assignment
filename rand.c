#include "rand.h"

int rand(void) {
  if (rand_array_index == RAND_SIZE) {
    rand_array_index = 0;
  }
  return rand_array[rand_array_index++];
}
