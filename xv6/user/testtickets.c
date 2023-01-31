#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"
#include "kernel/fs.h"

int
main(int argc, char *argv[]) {
    int tickets = atoi(argv[1]);
    if (settickets(tickets) != 0) {
        printf("Sys call error: %d\n", tickets);
    } else {
        printf("Successfull sys call...\n");
        printf("number of tickets = %d\n", tickets);
    }
    exit(0);
}
