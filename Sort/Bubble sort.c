#include <stdio.h>

void bubble_sort(int n, int array[]) {
    int i, j, temp;
    int is_sorted = 0; // Flag to check if the array is already sorted

    // Loop through the array n-1 times
    for (i = 0; i < n - 1; i++) {
        is_sorted = 1; // Assume the array is sorted in each iteration

        // Compare adjacent elements and swap them if necessary
        // The largest element will "bubble" up to the last position
        for (j = 0; j < n - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                // Swap the elements
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
                is_sorted = 0; // The array is not sorted, set the flag to false
            }
        }

        // If the inner loop completes without any swaps, the array is already sorted
        if (is_sorted) {
            break;
        }
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

    bubble_sort(n, array); // Call the bubble_sort function to sort the array

    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]); // Print the sorted array elements
    }

    return 0;
}
