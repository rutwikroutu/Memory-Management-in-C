#include<stdio.h>
#include<stdlib.h>

int *new_int_array(int size) {
    int *new_arr = malloc(size * sizeof(int));

    if(new_arr == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        exit(1);
    }

    return new_arr;
}

int main() {

    int* arr_of_6 = new_int_array(6);
    arr_of_6[0] = 1;
    arr_of_6[1] = 12;
    arr_of_6[2] = 123;
    arr_of_6[3] = 1234;
    arr_of_6[4] = 12345;
    arr_of_6[5] = 123456;

    free(arr_of_6);

    return 0;
    
}