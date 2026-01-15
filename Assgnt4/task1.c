#include <stdio.h>

int main() {
    int n, i;
    int arr[100]; // declaring an array with a fixed size limit

    // 1. Input the number of elements
    printf("Input the number of elements to store in the array :");
    scanf("%d", &n);

    // 2. Input the specific elements
    printf("Input %d number of elements in the array :\n", n);
    for(i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }

    // 3. Display values in original order
    printf("\nThe values store into the array are : ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    // 4. Display values in reverse order
    // We start 'i' at the last index (n-1) and go backwards to 0
    printf("\nThe values store into the array in reverse are : ");
    for(i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
