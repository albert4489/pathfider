#include "../inc/pathfinder.h"

t_paths_list *mx_build_path(int count, int *route, int *dist) {
    t_paths_list  *newpath;
    if ((!count) || (route == NULL) ||  (dist == NULL)) {
        return NULL;
    }
    newpath = malloc(sizeof(t_paths_list));
    if (newpath == NULL) {
        return NULL;
    }
    newpath->number = 0;
    newpath->counter = count;
    newpath->path = route;
    newpath->distance = *dist;
    newpath->next = NULL;

    return newpath;
}
