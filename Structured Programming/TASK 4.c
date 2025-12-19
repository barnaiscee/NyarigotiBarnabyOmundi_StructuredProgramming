#include <stdio.h>

 void swapNumbers(int *x, int *y)
 {

    int temp = *x;

    *x = *y;

    *y = temp;
}

int main() {

    int a = 20, b = 10;

    printf("Before Swap: a = %d, b = %d\n", a, b);


    swapNumbers(&a, &b);

    printf("After Swap:  a = %d, b = %d\n", a, b);

    return 0;
}
