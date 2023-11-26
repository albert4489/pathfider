#include "../inc/pathfinder.h"

bool mx_cmp_arr(int size1, int size2, int *a1, int *a2) {
    if (!a1 || !a2) {
        return false;
    }
    if(size1 == size2) {
        int index = 0;
        while (a1[index] == a2[index]) {
            if(index == size1 - 1) {
                return true;
            }
            index++;
        }
    }
    return false;
}
