#include "../inc/pathfinder.h"

void mx_error_empty_lines(char *input_str) {
    int line_count = 0;
    int str_length = mx_strlen(input_str);
    int i = 0;

    while (i < str_length - 1) {
        if (input_str[i] == '\n') {
            line_count++;
            if (input_str[i] == input_str[i + 1]) {
                mx_printerror_line(line_count);
            }
        }
        i++;
    }
    if (input_str[str_length - 1] == '\n') {
        mx_printerror_line(line_count);
    }
}
