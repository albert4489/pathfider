#include "../inc/pathfinder.h"

void mx_check_digit(char *str, int line) {
    int i = 0;
    while(str[i] != '\0') {
        if(!mx_isdigit(str[i])) {
            mx_printerror_line(line);
        }
        i++;
    }
}
