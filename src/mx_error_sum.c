#include "../inc/pathfinder.h"

void mx_error_sum(char **arr) {
    int sum = 0;
    for(int i = 1; arr[i]; i++) {
        char **temp = mx_delim(arr[i]);
        sum = sum + mx_atoi(temp[2]);
        mx_del_strarr(&temp);
    }
    if(sum > INT_MAX) {
        mx_printerror("error: sum of bridges lengths is too big\n");
        exit(1);
    }
}
