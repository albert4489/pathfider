#include "../inc/pathfinder.h"

void mx_word(int *count, char **wordarr, char *curr) {
    int dup = 0;
    for (int index = 0; wordarr[index] && index < *count; index++) {
        if (mx_strcmp(wordarr[index], curr) == 0) {
            dup = 1;
            return;
        }
    }
    if (!dup) {
        wordarr[*count] = mx_strdup(curr);
        (*count)++;
    }
}

