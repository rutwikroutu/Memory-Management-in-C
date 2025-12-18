#include<stdio.h>
#include<string.h>

int main () {
    int age = 37;
    int *age_ptr = &age;
    int numbers[5] = {0, 1, 2, 3, 4};

    int *numbers_ptr = numbers;

    int second_value = numbers[2];
    int ptr_second_value = *(numbers_ptr + 2);

    printf("Both of these same?: %d\n", second_value == ptr_second_value);

    *age_ptr = 12;

    printf("Value: %d", age);


    /* Implementation of String concat */

    char str1[100] = "Hello";
    const char *str2 = " World !";

    int idx = 0;
    while(1) {
        if(str1[idx] == '\0') {
            break;
        }

        idx++;
    }

    int idx2 = 0;

    while(1) {
        str1[idx + idx2] = str2[idx2];

        if(str2[idx2] == '\0') break;

        idx2++;
    }

    printf("New String: %s\n", str1);

    /*String Functions from string.h*/

    int len = strlen(str2);

    printf("Length of second string: %d\n", len);
}