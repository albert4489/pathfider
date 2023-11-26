#include "../inc/pathfinder.h"

void mx_error_wrong_file(int argc, char *argv[]) {
    if(argc != 2) {
        mx_printerror("usage: ./pathfinder [filename]\n");
        exit(1);
    }
    int file = open(argv[1], O_RDONLY);
    if(file < 0) {
        mx_printerror("error: file ");
        mx_printerror(argv[1]);
        mx_printerror(" does not exist\n");
        exit(1);
    }
    char buffer[1];
    int data = read(file, buffer, sizeof(buffer));
    if (data <= 0) {
        mx_printerror("error: file ");
        mx_printerror(argv[1]);
        mx_printerror(" is empty\n");
        exit(1);
    }
    if(buffer[0] == '\n') {
        mx_printerror_line(0);
        exit(1);
    }
    close(file);
}
