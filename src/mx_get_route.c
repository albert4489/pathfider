#include "../inc/pathfinder.h"

int *mx_get_route(int curr, int *prev, int prevnode, int *counter) {
    int temp = curr;
    int step = 0;
    while(temp != prevnode) {
        temp = prev[temp];
        step++;
    }
    temp = curr;
    *counter = step + 1;
    int *route = malloc((step + 1)* sizeof(int));
    route[step] = curr;
    while(temp != prevnode && step > 0) {
        temp = prev[temp];
        step--;
        route[step] = temp;
    }
    return route;
}

