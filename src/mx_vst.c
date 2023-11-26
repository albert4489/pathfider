#include "../inc/pathfinder.h"

void mx_vst(int *vst, int a, int early) {
    int i = 0;
    while (i < a) {
        vst[i] = 0;
        i++;
    }
    vst[early] = 1;
}
