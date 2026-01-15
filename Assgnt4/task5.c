#include <stdio.h>

int main() {
    int arr[100];
    int n, i, j, temp;

    // 1. Input the size of the array
    printf("Input the size of array : ");
    scanf("%d", &n);

    // 2. Input the elements
    printf("Input %d elements in the array :\n", n);
    for(i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }

    // 3. Sorting Logic (Bubble Sort)
    // compare every element with every other element
    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            // If the current element (arr[i]) is bigger than the next one (arr[j]),
            // swap them so the smaller one comes first.
            if(arr[i] > arr[j]) {
                temp = arr[i];    // Store value of i in temp
                arr[i] = arr[j];  // Move value of j to i
                arr[j] = temp;    // Move temp (old i) to j
            }
        }
    }

    // 4. Print the sorted array
    printf("\nElements of array in sorted ascending order: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
