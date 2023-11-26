#include "../inc/pathfinder.h"

char *mx_get_substring(const char *str, char delim) {
    int f = mx_get_char_index(str, delim);
    return mx_strndup(str, f);
}
