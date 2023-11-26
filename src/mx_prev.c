#include "../inc/pathfinder.h"

int **mx_prev(int a, int early) {
    int **prev = malloc(3 * sizeof(int *));
    prev[0] = malloc(a * sizeof(int));
    prev[1] = malloc(a * sizeof(int));
    prev[2] = NULL;

    int i = 0;
    while (i < a) {
        prev[0][i] = early;
        prev[1][i] = early;
        i++;
    }
    return prev;
}
