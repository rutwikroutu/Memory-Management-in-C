#include<stdio.h>

int main () {

    typedef enum Color {
        RED = 55,
        GREEN = 176,
        BLUE = 22,
    } color_t;

    /* switch() {
        case __: return "";
        default: return "";
    } */

    printf("The size of the enum we made is: %zu\n", sizeof(color_t));

    return 0;
}