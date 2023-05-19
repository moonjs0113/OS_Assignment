#include "types.h"
#include "stat.h"
#include "user.h"

void exit_child(int);
  
int
main(int argc, char **argv) {
  int p;
  printf(1, "Lottery Test Start\n");
  p = fork(); 
  if (p != 0) {
    // settickets(rand());
    settickets(123);
    printf(1, "Parent - p: %d\n", p);
    printf(1, "Parent Process ID: %d\n", getpid());
    printf(1, "Parent Process Tickets: %d\n", gettickets());
  } else {
    printf(1, "Child - p: %d\n", p);
    settickets(456);
    exit_child(p);
  }
  // printf(1, "Rand: %d\n", rand());
  printf(1, "Parent Process Exit\n");
  exit();
}

void
exit_child(int pid) {
  if(pid){
    if(wait() != pid){
      printf(1, "wait wrong pid\n");
      return;
    } else {
      printf(1, "Parent Process Wait Child Process\n");
    }
  } else {
    printf(1, "Child Process ID: %d\n", getpid());
    printf(1, "Child Process Tickets: %d\n", gettickets());
    printf(1, "Child Process Exit\n");
  }
}
