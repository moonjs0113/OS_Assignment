#include "types.h"
#include "stat.h"
#include "user.h"

// int clone(void*, void*, void*, void*);
// int join(void**);

int
main(int argc, char **argv) {
  printf(1, "hello\n");
  clone();
  join();
  exit();
}