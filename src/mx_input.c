#include "../inc/pathfinder.h"

void mx_input(int *count, char **wordarr, char **curr) {
    for (int j = 1; curr[j]; j++) {
        char **temp = mx_delim(curr[j]);
        mx_word(count, wordarr, temp[0]);
        mx_word(count, wordarr, temp[1]);
        mx_del_strarr(&temp);
    }
}
