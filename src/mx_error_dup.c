#include "../inc/pathfinder.h"

void mx_error_dup(char **arr) {
    for (int i = 0; arr[i]; i++) {
        for (int j = i + 1; arr[j]; j++) {
            if(mx_strcmp(arr[i], arr[j]) == 0) {
                mx_printerror("error: duplicate bridges\n");
                exit(1);
            }
        }
    }
}
