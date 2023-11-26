#include "../inc/pathfinder.h"

void mx_dst(int *dst, int a, int early, int **dexarr) {
    int i = 0;
    while (i < a) {
        dst[i] = dexarr[early][i];
        i++;
    }
    dst[early] = 0;
}
