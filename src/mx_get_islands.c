#include "../inc/pathfinder.h"

char **mx_get_islands(int c, char **arr) {
    int i = 0;
    char **wordarr = (char **) malloc((c + 1) * sizeof(char *));

    mx_input(&i, wordarr, arr);
    mx_error_islands(c, i);
    wordarr[i] = NULL;
    return wordarr;
}
