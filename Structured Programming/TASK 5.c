#include <stdio.h>


void incrementVal(int n) {

   n++;
}


void incrementRef(int *n) {

    (*n)++;
}

int main() {

    int Num = 10;

    printf("Initial Value: %d\n", Num);

    incrementVal(Num);

    printf("After incrementVal (Pass by Value): %d\n", Num);

    incrementRef(&Num);

    printf("After incrementRef (Pass by Reference): %d\n", Num);

    return 0;
}
