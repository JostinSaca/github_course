#include <stdio.h>

int main (int argc, char *argv[]) {
    printf("Hola Mundo\n");
    int i [3]= {10, 100, 200};
    int j, *ptr;

    ptr = i;
    for (j = 0; j < 3; j++) {
        printf("Element[%d] = %d\n", j, *(ptr + j));
    }
    return 0;

}