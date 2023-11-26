#include "../inc/pathfinder.h"

int **mx_main_alg(int **dexarr, int *dst, int a, int early) {
    int vst[a];
    int counter;
    int minimal;
    int next;
    int i;
    int **prev = mx_prev(a, early);
    mx_vst(vst, a, early);
    mx_dst(dst, a, early, dexarr);
    counter = 1;
    while (counter < a - 1) {
        minimal = INT_MAX;
        i = 0;
        while (i < a) {
            if (dst[i] < minimal && !vst[i]) {
                minimal = dst[i];
                next = i;
            }
            i++;
        }
        vst[next] = 1;
        i = 0;
        while (i < a) {
            if (!vst[i]) {
                if (minimal + dexarr[next][i] < dst[i]) {
                    dst[i] = minimal + dexarr[next][i];
                    prev[0][i] = next;
                    prev[1][i] = next;
                }
                if (minimal + dexarr[next][i] == dst[i]) {
                    prev[1][i] = next;
                }
            }
            i++;
        }
        counter++;
    }
    return prev;
}
