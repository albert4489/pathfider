#include "../inc/pathfinder.h"

void mx_error_wrong_line(char **str) {
    for (int i = 1; str[i]; i++) {
        int dash = 0;
        int virgule = 0;
        int getchar = 0;
        for (int j = 0; str[i][j] && dash < 2; j++) {
            getchar = mx_get_char_index(&str[i][j], '-');
            if (getchar != -1) {
                dash += 1;
                j += getchar;
            } else {
                return;
            }
        }
        for (int j = 0; str[i][j] && virgule < 2; j++) {
            getchar = mx_get_char_index(&str[i][j], ',');
            if (getchar != -1) {
                virgule += 1;
                j += getchar;
            } else {
                return;
            }
        }
        if (virgule != 1 || dash != 1) {
            mx_printerror_line(i);
        }
    }
}
