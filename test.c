#include "types.h"
#include "stat.h"
#include "user.h"
#include "defs.h"

int
main(int argc, char **argv) {
    cprintf("%d\n", cpuid());
    hello(argv[1]);
}
