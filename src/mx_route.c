#include "../inc/pathfinder.h"

void mx_route(t_paths_list *paths, char **islands) {
    mx_printstr("Route: ");
    int i = 0;
    while(i < paths->counter) {
        mx_printstr(islands[paths->path[i]]);
        if(i == paths->counter - 1) {
            return;
        }
        mx_printstr(" -> ");
        i++;
    }
    mx_printstr("\n");
}

