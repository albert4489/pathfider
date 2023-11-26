#include "../inc/pathfinder.h"

int **mx_build_dex_matrix(int **m, int e) {
    int **dex = mx_build_matrix(e, INT_MAX);
    for (int i = 0; i < e; i++)
        for (int j = 0; j < e; j++)
            if(m[i][j] != 0)
                dex[i][j] = m[i][j];
    return dex;
}
