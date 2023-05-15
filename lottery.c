#include "types.h"
#include "stat.h"
#include "user.h"

void exit_child();

int
main(int argc, char **argv) {
  int p;
  printf(1, "Lottery Test Start\n");
  p = fork();
  if (p != 0)
    printf(1, "My Process ID: %d\n", getpid());
  exit_child(p);
  printf(1, "Parent Process Exit\n");
  exit();
}

void
exit_child(int pid) {
  if(pid){
    if(wait() != pid){
      printf(1, "wait wrong pid\n");
      return;
    }
  } else {
    printf(1, "Child Process Exit\n");
    exit();
  }
}
