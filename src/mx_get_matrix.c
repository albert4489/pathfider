#include "../inc/pathfinder.h"

int **mx_get_matrix(int e, char *s, char **islands) {
    int **m = mx_build_matrix(e,0);
    char **arr = mx_strsplit(s,'\n');
    for(int i = 0; arr[i]; i++) {
        int mi = 0;
        int mj = 0;
        char **temp = mx_delim(arr[i]);
        for (int j = 0; j < e; j++) {
            if(mx_strcmp(islands[j],temp[0]) == 0) {
                mi = j;
            }
            if(mx_strcmp(islands[j], temp[1]) == 0) {
                mj = j;
            }
        }
        m[mi][mj] = mx_atoi(temp[2]);
        m[mj][mi] = mx_atoi(temp[2]);
        mx_del_strarr(&temp);
    }
    mx_del_strarr(&arr);
    return m;
}
