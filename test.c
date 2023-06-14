#include "types.h"
#include "stat.h"
#include "user.h"
#include "thread.c"



void *function(void *arg1, void *arg) {
  printf(1, "Call function\n");
  return arg1
}

int
main(int argc, char **argv) {
  int a = 1;
  printf(1, "hello\n");
  thread_create(function, (void*)&a, (void*)&a);
  thread_join();
  exit();
}