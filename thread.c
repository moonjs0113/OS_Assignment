#include "types.h"
#include "stat.h"
#include "user.h"
// int clone(void*, void*, void*, void*);
// int join(void**);

int thread_create(void *fnc(void*,void*), void *arg1, void *arg2) {
  int a = 0;
  clone(fnc, arg1, arg2, (void*)&a);
  return 0;
}

int thread_join() {
  int a = 0;
  join((void*)&a);
  return 0;
}