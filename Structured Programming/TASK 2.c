#include <stdio.h>

int main() {

    int count =10; // Initial value

    int *pCount = &count;

    *pCount = 20;

    printf("The updated value of count is: %d\n", count);

    return 0;
}
