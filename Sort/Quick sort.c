#include <stdio.h>

// Function to swap two elements
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Function to partition the array
int partition(int arr[], int low, int high) {
    // Select the pivot (first element in this case)
    int pivot = arr[low];
    
    // Index of the larger element
    int i = high + 1;
    
    // Traverse through the array and rearrange elements
    for (int j = high; j > low; j--) {
        if (arr[j] > pivot) {
            i--;
            swap(&arr[i], &arr[j]); // Swap elements if larger
        }
    }
    
    // Swap the pivot element to its correct position
    swap(&arr[i - 1], &arr[low]);
    
    // Return the index of the pivot
    return (i - 1);
}

// Function to perform Quick Sort
void quick_sort(int arr[], int low, int high) {
    if (low < high) {
        // Partition the array and get the pivot index
        int pi = partition(arr, low, high);
        
        // Recursively sort the left and right subarrays
        quick_sort(arr, low, pi - 1); // Before the pivot
        quick_sort(arr, pi + 1, high); // After the pivot
    }
}

int main() {
    int arr[] = {3, 6, 8, 10, 1, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Sort the array using Quick Sort
    quick_sort(arr, 0, n - 1);

    // Print the sorted array
    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
