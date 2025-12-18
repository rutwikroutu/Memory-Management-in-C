#include<stdio.h>

int main() {

    char *str = "This is a string";

    const int x = 5; //cant mutate this

    printf("Hello World !\n");
    
    if(x>3) {
        printf("This is the string %s\n and the number: %d\n", str, x);
    }

    printf("Size of string: %d", sizeof(str));

    for(int i = 0; i < 5; i++) {
        printf("Iteration number: %d\n", i);
    }

    return 0;
}