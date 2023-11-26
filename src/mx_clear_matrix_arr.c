#include "../inc/pathfinder.h"

void mx_clear_matrix_arr(int ***matrix) {
    if (matrix == NULL || *matrix == NULL) {
        return;
    }
    int ***curr = matrix;
    int **inner = *matrix;
    while (**curr != NULL) {
        mx_clear_matrix(*curr);
        (*curr)++;
    }
    free(inner);
    *matrix = NULL;
}
