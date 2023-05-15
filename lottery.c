#include "types.h"
#include "stat.h"
#include "user.h"

int
main(int argc, char **argv) {
  int p;
  printf(1, "Lottery Test Start\n");
  p = fork();
  if (p != 0)
    print(1, "My Process ID: %d\n", getpid());
  exit_child(p);
  exit();
}
