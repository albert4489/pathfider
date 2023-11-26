#include "../inc/pathfinder.h"

void mx_push_path(t_paths_list **allpath, int cap, int *route, int *dist) {
    t_paths_list *newpath;
    t_paths_list *curr;

    if (!allpath || !cap || !route || !dist) {
        return;
    }

    newpath = mx_build_path(cap, route, dist);
    if (!newpath) {
        return;
    }

    if (*allpath == NULL) {
        *allpath = newpath;
        return;
    }

    // Initialize curr before using it
    curr = *allpath;

    while (curr->next != NULL) {
        curr = curr->next;
    }

    curr->next = newpath;
}
