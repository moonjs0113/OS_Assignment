#include "types.h"
#include "stat.h"
#include "user.h"

// int clone(void*, void*, void*, void*);
// int join(void**);

void function(void *arg) {
  printf(1, "Call function\n");
}

int
main(int argc, char **argv) {
  int a = 0;
  printf(1, "hello\n");

  clone((void*)&a, (void*)&a, (void*)&a, (void*)&a);
  join((void*)&a);
  exit();
}