#ifndef PATHFINDER_H
#define PATHFINDER_H

#include "../libmx/inc/libmx.h"

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stddef.h>
#include <wchar.h>
#include <stdbool.h>
#include <fcntl.h>
#include <malloc.h>
//#include <malloc/malloc.h>


#define INT_MAX 2147483647

typedef struct s_paths_list {
    int number;
    int counter;
    int *path;
    int distance;
    struct s_paths_list *next;
}               t_paths_list;

int **mx_main_alg(int **dexarr, int *dst, int a, int early);
int **mx_prev(int a, int early);
void mx_vst(int *vst, int a, int early);
void mx_dst(int *dst, int a, int early, int **dexarr);
void mx_printerror(const char *str);
void mx_printerror_line(int e);
void mx_error_empty_lines(char *input_str);
void mx_error_wrong_file(int argc, char *argv[]);
void mx_error_wrong_line(char **str);
void mx_error_wrong_ascii(char **str);
char *mx_get_substring(const char *str, char delim);
char **mx_delim(const char *str);
bool mx_isalpha(int c);
bool mx_isdigit(int c);
void mx_check_alpha(char *str, int line);
void mx_check_empty(char *str, int line);
void mx_check_digit(char *str, int line);
void mx_error_dup(char **arr);
void mx_error_sum(char **arr);
int mx_atoi(const char *str);
void mx_print_all_errors(int argc, char *argv[]);
void mx_error_firstline_digit(char *str);
void mx_word(int *count, char **wordarr, char *curr);
void mx_input(int *count, char **wordarr, char **curr);
void mx_error_islands(int exp, int act);
char **mx_get_islands(int c, char **arr);
int **mx_build_matrix(int c, int all);
int **mx_build_dex_matrix(int **m, int e);
int **mx_get_matrix(int e, char *s, char **islands);
int *mx_get_route(int curr, int *prev, int prevnode, int *counter);
t_paths_list *mx_build_path(int count, int *route, int *dist);
void mx_push_path(t_paths_list **allpath, int cap, int *route, int *dist);
bool mx_cmp_arr(int size1, int size2, int *a1, int *a2);
void mx_clear_matrix(int **arr);
void mx_clear_matrix_arr(int ***matrix);
t_paths_list *mx_buid_all_paths(int **graph, int numnode);
void mx_border();
void mx_path(t_paths_list *path, char **islands);
void mx_route(t_paths_list *paths, char **islands);
void mx_distance(t_paths_list *paths, int **m);
void mx_p_paths(t_paths_list *paths, int **m, char **islands);
int main(int argc, char *argv[]);

#endif //PATHFINDER_H
