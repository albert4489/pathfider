#include "../inc/pathfinder.h"

void mx_path(t_paths_list *path, char **islands) {
    mx_printstr("Path: ");
    mx_printstr(islands[path->path[0]]);
    mx_printstr(" -> ");
    mx_printstr(islands[path->path[path->counter - 1]]);
    mx_printstr("\n");
}

