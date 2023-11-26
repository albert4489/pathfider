#include "../inc/pathfinder.h"

void mx_p_paths(t_paths_list *paths, int **m, char **islands) {
    t_paths_list *c = paths;
    if(paths != NULL) {
        while (c != NULL) {
            mx_border();
            mx_path(c, islands);
            mx_route(c, islands);
            mx_distance(c, m);
        }
    } else {
        return;
    }
}
