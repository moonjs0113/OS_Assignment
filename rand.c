#include "types.h"
#include "stat.h"
#include "rand.h"

int rand(void) {
  if (index == RAND_SIZE) {
    index = 0;
  }
  return rand_array[index++];
}
