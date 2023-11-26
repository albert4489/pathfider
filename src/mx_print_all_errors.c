#include "../inc/pathfinder.h"

void mx_print_all_errors(int argc, char *argv[]) {
    mx_error_wrong_file(argc, argv);
    char *s = mx_file_to_str(argv[1]);
    mx_error_empty_lines(s);
    char **arr = mx_strsplit(s, '\n');
    mx_error_firstline_digit(arr[0]);
    mx_error_wrong_line(arr);
    mx_error_wrong_ascii(arr);
    mx_error_dup(arr);
    mx_error_sum(arr);
    mx_strdel(&s);
    mx_del_strarr(&arr);
}
