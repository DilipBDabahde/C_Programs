#include <stdio.h>
#include <string.h>

#define BUFFER_SIZE BUFSIZ /* or some other number */

int main(int argc, const char **argv) {
    char i[BUFFER_SIZE];
    fgets(i, BUFSIZ, stdin);
    while (strcmp(i, "quit\n") != 0) {
       
        fgets(i, BUFSIZ, stdin);
    }
}
