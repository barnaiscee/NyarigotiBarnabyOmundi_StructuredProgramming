#include <stdio.h>

int main() {
    int n, i, sum = 0; // Initialized sum to 0 to avoid garbage values
    int arr[100];      // Fixed size array

    // 1. Input the number of elements
    printf("Input the number of elements to store in the array :");
    scanf("%d", &n);

    // 2. Input the elements
    printf("Input %d elements in the array :\n", n);
    for(i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);

        // 3. Add current element to sum immediately
        sum += arr[i];
    }

    // 4. Print the final sum
    printf("Sum of all elements stored in the array is : %d\n", sum);

    return 0;
}
