#include<stdio.h>
#include<stdlib.h>

int main() {

    int *a = malloc(sizeof(int));
    int *b = malloc(sizeof(int));
    if (a == NULL || b == NULL) {
        fprintf(stderr, "malloc failed\n");
        free(a);
        free(b);
        return 1;
    }

    *a = 0;
    *b = 1;

    int temp = *a;
    *a = *b;
    *b = temp;

    printf("a: %d, b: %d\n", *a, *b);

    free(a); free(b);

    return 0;
}