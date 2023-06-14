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
  printf(1, "hello\n");
  clone(NULL, NULL, NULL, NULL);
  join(NULL);
  exit();
}