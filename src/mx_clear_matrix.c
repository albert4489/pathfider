#include "../inc/pathfinder.h"

void mx_clear_matrix(int **arr) {
    if (*arr && arr) {
        free(*arr);
        *arr = NULL;
    }
}
