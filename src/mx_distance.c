#include "../inc/pathfinder.h"

void mx_distance(t_paths_list *paths, int **m) {
    mx_printstr("Distance: ");

    if(paths->counter > 2) {
        for (int j = 1; j < paths->counter; j++) {
            mx_printint(m[paths->path[j - 1]][paths->path[j]]);
            if (j == paths->counter - 1) {
                return;
            }
            mx_printstr(" + ");
        }
        mx_printstr(" = ");
    }
    mx_printint(paths->distance);
    mx_printstr("\n");
}
