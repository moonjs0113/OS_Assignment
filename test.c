#include "types.h"
#include "stat.h"
#include "user.h"

int
main(int argc, char **argv) {
    printf("%s\n", argv[1]);
    hello(argv[1]);
}
