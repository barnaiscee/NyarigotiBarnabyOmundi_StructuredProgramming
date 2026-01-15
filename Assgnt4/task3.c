#include <stdio.h>

int main() {
    int n, i, j, count;
    int arr[100]; // Fixed size array

    printf("Print all unique elements of an array:\n");
    printf("------------------------------------------\n");

    // 1. Input the number of elements
    printf("Input the number of elements to be stored in the array: ");
    scanf("%d", &n);

    // 2. Input the elements
    printf("Input %d elements in the array :\n", n);
    for(i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }

    // 3. Find and print unique elements
    printf("The unique elements found in the array are: ");

    for(i = 0; i < n; i++) {
        count = 0; // Reset counter for the current number

        // Check against every other number in the array
        for(j = 0; j < n; j++) {
            // compare arr[i] with every arr[j]
            // If there's a match, increase the count
            if(arr[i] == arr[j]) {
                count++;
            }
        }

        // If count is exactly 1, it means the number only matched itself
        // Therefore, it is unique.
        if(count == 1) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");

    return 0;
}
