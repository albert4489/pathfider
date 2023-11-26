#include "../inc/pathfinder.h"

void mx_check_alpha(char *str, int line) {
    int i = 0;
    while(str[i] != '\0') {
        if(!mx_isalpha(str[i])) {
            mx_printerror_line(line);
        }
        i++;
    }
}
