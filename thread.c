// int clone(void*, void*, void*, void*);
// int join(void**);

int thread_create(void *fnc, void *arg1, void *arg2) {
  int a = 0;
  clone(fnc, arg1, arg2, (void*)&a);
}

int thread_join() {
  int a = 0;
  join((void*)&a);
}