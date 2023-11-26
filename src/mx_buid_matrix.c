#include "../inc/pathfinder.h"

int **mx_build_matrix(int c, int all) {
    int **arr = (int **) malloc(c * sizeof(int *));
    for (int i = 0; i < c; i++) {
        int *a = malloc(c * sizeof(int));
        for (int j = 0; j < c; j++) {
            a[j] = all;
        }
        arr[i] = a;
    }
    return arr;
}
