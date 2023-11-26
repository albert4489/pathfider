#include "../inc/pathfinder.h"

int main(int argc, char *argv[]) {
    mx_print_all_errors(argc, argv);
    char *str = mx_file_to_str(argv[1]);
    char **arr = mx_strsplit(str, '\n');
    int graph = mx_atoi(str);
    char **islands = mx_get_islands(graph, arr);
    int **m = mx_get_matrix(graph, str, islands);
    int **dex = mx_build_dex_matrix(m, graph);
    t_paths_list *paths = mx_buid_all_paths(dex, graph);
    mx_p_paths(paths, m, islands);
    mx_strdel(&str);
    mx_del_strarr(&arr);
    mx_strdel(islands);
    mx_clear_matrix(m);
    mx_clear_matrix(dex);

    return 0;
}
