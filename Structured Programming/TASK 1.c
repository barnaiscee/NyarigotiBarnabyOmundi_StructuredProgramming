  #include <stdio.h>

int main() {

    int num = 10 ;           // Declare integer

    int *ptr;               // Declare pointer

    ptr = &num;             //  Store address of num in pointer ptr

    printf("Value of num: %d\n", num);

    printf("Value stored in ptr (address of num): %p\n", (void*)ptr);

    printf("Address of num: %p\n", (void*)&num);

    printf("Value accessed using *ptr (dereferenced): %d\n", *ptr);

    return 0;
}
