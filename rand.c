#include "rand.h"

int rand(void) {
  if (index == RAND_SIZE) {
    index = 0;
  }
  return rand_array[rand_array_index++];
}
