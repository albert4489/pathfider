#include "../inc/pathfinder.h"

void mx_error_islands(int exp, int act) {
    if(exp != act) {
        mx_printerror("error: invalid number of islands\n");
        exit(1);
    }
}
