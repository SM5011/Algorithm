#include <stdio.h>

// Function to perform binary search on a sorted array of size 'n'
int binary_search(int n, int array[n]) {
    int a;
    printf("Enter key for search: ");
    scanf("%d", &a); // Input the key to search for

    int right = n - 1; // Initialize the right pointer to the last index of the array
    int left = 0;      // Initialize the left pointer to the first index of the array
    int mid;           // Variable to store the middle index

    while (left <= right) {
        mid = (right + left) / 2; // Calculate the middle index

        if (array[mid] == a) {
            printf("Found"); // Key found at index 'mid'
            return 1;        // Element found, return 1
        } else if (a < array[mid]) {
            right = mid - 1; // Key is in the left half of the array, update 'right'
        } else {
            left = mid + 1; // Key is in the right half of the array, update 'left'
        }
    }

    printf("Not found"); // Key not found in the array
    return 0;            // Element not found, return 0
}

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n); // Input the size of the array
    int array[n];
    printf("Enter array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]); // Input array elements from the user
    }

    binary_search(n, array); // Call the binary_search function to search for the key
    return 0;
}
