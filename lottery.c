#include "types.h"
#include "stat.h"
#include "user.h"

void exit_child(int);
  
int
main(int argc, char **argv) {
  int p;
  printf(1, "Lottery Test Start\n");
  settickets(100);
  p = fork(); 
  if (p != 0) {
    // settickets(rand());
    // printf(1, "Parent - p: %d\n", p);
    printf(1, "Parent Process ID: %d\n", getpid());
    // printf(1, "Parent Process Tickets: %d\n", gettickets());
  } else {
    settickets(100);
  }
  int i = 0;
  for (i = 0; i < 100; i++) {
    if ((i % 10) == 0) {
      printf(1, "Parent Value: %d\n", i);
    }
  }
  exit_child(p);
  // printf(1, "Rand: %d\n", rand());
  exit();
}

void
exit_child(int pid) {
  if(pid){
    printf(1, "Parent Process Wait Child Process\n");
    if(wait() != pid){
      printf(1, "wait wrong pid\n");
      return;
    }
    printf(1, "Parent Process Exit\n");
  } else {
    
    printf(1, "Child Process ID: %d\n", getpid());
    // printf(1, "Child Process Tickets: %d\n", gettickets());
    printf(1, "Child Process Exit\n");
  }
}
