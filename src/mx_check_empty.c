#include "../inc/pathfinder.h"

void mx_check_empty(char *str, int line) {
    if(str[0] == '\0') {
        mx_printerror_line(line);
    }
}
