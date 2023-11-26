#include "../inc/pathfinder.h"

char **mx_delim(const char *str) {
    if (str == NULL) {
        return NULL;
    }
    char **result = (char **) malloc((3 + 1)* sizeof(char *));
    result[0] = mx_get_substring(str, '-');
    str = str + mx_strlen(result[0]) + 1;

    result[1] = mx_get_substring(str, ',');
    str = str + mx_strlen(result[1]) +1;

    result[2] = mx_strdup(str);;
    result[3] = NULL;

    return result;
}
