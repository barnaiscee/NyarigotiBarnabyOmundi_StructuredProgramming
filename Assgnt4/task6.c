#include <stdio.h>

int main() {
    int arr[100];
    int n, i, value, pos;

    // 1. Input the size of array
    printf("Input the size of array : ");
    scanf("%d", &n);

    // 2. Input the elements
    printf("Input %d elements in the array in ascending order:\n", n);
    for(i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }

    // 3. Input insertion details
    printf("Input the value to be inserted : ");
    scanf("%d", &value);
    printf("Input the Position, where the value to be inserted : ");
    scanf("%d", &pos);

    // 4. Display current list
    printf("The current list of the array : ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // 5. Shift elements to create space
    for(i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }

    // 6. Insert the new value
    // Arrays are 0-indexed, so "Position 2" is actually Index 1.
    arr[pos - 1] = value;

    // Increment n because the array is now 1 element longer
    n++;

    // 7. Display the new list
    printf("After Insert the element the new list is : ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
