#include "../inc/pathfinder.h"

void mx_printerror_line(int e) {
    mx_printerror("error: line ");
    mx_printerror(mx_itoa(e + 1));
    mx_printerror(" is not valid\n");
    exit(1);
}
