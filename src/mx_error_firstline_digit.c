#include "../inc/pathfinder.h"

void mx_error_firstline_digit(char *str) {
    for (int i = 1; i < mx_strlen(str); i++) {
        if(!mx_isdigit(str[i])) {
            mx_printerror("error: line 1 is not valid\n");
            exit(1);
        }
    }
}
