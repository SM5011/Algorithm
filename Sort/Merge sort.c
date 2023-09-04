#include <stdio.h>

// Merge two sorted subarrays into one sorted array
void merge(int array[], int left, int mid, int right) {
    int n1 = mid - left + 1; // Size of the left subarray
    int n2 = right - mid;    // Size of the right subarray

    // Temporary arrays to store the two subarrays
    int leftArray[n1], rightArray[n2];

    // Copy data to the temporary arrays
    for (int i = 0; i < n1; i++) {
        leftArray[i] = array[left + i];
    }
    for (int j = 0; j < n2; j++) {
        rightArray[j] = array[mid + 1 + j];
    }

    // Merge the two temporary arrays back into the original array in sorted order
    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (leftArray[i] <= rightArray[j]) {
            array[k] = leftArray[i];
            i++;
        } else {
            array[k] = rightArray[j];
            j++;
        }
        k++;
    }

    // Copy the remaining elements, if any, from the leftArray
    while (i < n1) {
        array[k] = leftArray[i];
        i++;
        k++;
    }

    // Copy the remaining elements, if any, from the rightArray
    while (j < n2) {
        array[k] = rightArray[j];
        j++;
        k++;
    }
}

// Recursive function to perform merge sort
void merge_sort(int array[], int left, int right) {
    if (left < right) {
        // Calculate the middle index to divide the array into two halves
        int mid = left + (right - left) / 2;

        // Recursive call to sort the left half
        merge_sort(array, left, mid);

        // Recursive call to sort the right half
        merge_sort(array, mid + 1, right);

        // Merge the two sorted halves
        merge(array, left, mid, right);
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

    merge_sort(array, 0, n - 1); // Call the merge_sort function to sort the array

    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]); // Print the sorted array elements
    }

    return 0;
}
