#include <stdio.h>

int main() {
    int arr[100];
    int n, i, max, min;

    // 1. Input the number of elements
    printf("Input the number of elements to be stored in the array :");
    scanf("%d", &n);

    // 2. Input the elements
    printf("Input %d elements in the array :\n", n);
    for(i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }

    // 3. Initialize max and min
    max = arr[0];
    min = arr[0];

    // 4. Loop through the rest of the array to compare
    for(i = 1; i < n; i++) {
        // If current element is bigger than max, update max
        if(arr[i] > max) {
            max = arr[i];
        }

        // If current element is smaller than min, update min
        if(arr[i] < min) {
            min = arr[i];
        }
    }

    // 5. Display the results
    printf("Maximum element is : %d\n", max);
    printf("Minimum element is : %d\n", min);

    return 0;
}
