#include "types.h"
#include "stat.h"
#include "user.h"
int main(int argc, char* argv[]) {
    hello(argv[1]);
}

void hello(char* argv) {
    printf("%s\n", argv);
}
