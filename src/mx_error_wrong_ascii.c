#include "../inc/pathfinder.h"

void mx_error_wrong_ascii(char **str) {
    char **temp = NULL;
    for(int i = 1; str[i]; i++) {
        temp = mx_delim(str[i]);

        mx_check_empty(temp[0], i);
        mx_check_alpha(temp[0],i);

        mx_check_empty(temp[1], i);
        mx_check_alpha(temp[1], i);

        mx_check_empty(temp[2], i);
        mx_check_digit(temp[2],i);

        mx_del_strarr(&temp);
    }
}
