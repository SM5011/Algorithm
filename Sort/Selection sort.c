#include <stdio.h>

void selection_sort(int n, int array[]) {
    int i, j, min_index, temp;

    // Loop through the entire array
    for (i = 0; i < n - 1; i++) {
        // Assume the current element as the minimum
        min_index = i;

        // Find the minimum element in the unsorted portion of the array
        for (j = i + 1; j < n; j++) {
            if (array[j] < array[min_index]) {
                min_index = j;
            }
        }

        // Swap the minimum element with the first element of the unsorted portion
        temp = array[i];
        array[i] = array[min_index];
        array[min_index] = temp;
    }
}

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int array[n];
    printf("Enter array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    selection_sort(n, array); // Call the selection_sort function to sort the array

    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]); // Print the sorted array elements
    }

    return 0;
}
