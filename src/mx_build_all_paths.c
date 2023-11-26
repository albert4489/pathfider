#include "../inc/pathfinder.h"

t_paths_list *mx_buid_all_paths(int **graph, int numnode) {
    t_paths_list *allpaths = NULL;

    int prevnode = 0;
    while (prevnode < numnode - 1) {
        int *dist = malloc(numnode * sizeof(int));
        int **prdc = mx_main_alg(graph, dist, numnode, prevnode);
        bool same = mx_cmp_arr(numnode, numnode, prdc[0], prdc[1]);

        int end = prevnode + 1;
        while (end < numnode) {
            int count_pth1 = 0;
            int *pth1 = mx_get_route(end, prdc[0], prevnode, &count_pth1);
            if(!same) {
                int count_pth2 = 0;
                int *pth2 = mx_get_route(end, prdc[1], prevnode, &count_pth2);

                if(!mx_cmp_arr(count_pth1, count_pth2, pth1, pth2))
                    mx_push_path(&allpaths, count_pth2, pth2, &dist[end]);
                else
                    free(pth2);
            }
            mx_push_path(&allpaths, count_pth1, pth1, &dist[end]);
            end++;
        }
        mx_clear_matrix_arr(&prdc);
        free(dist);
        prevnode++;
    }
    return allpaths;
}

