#include <stdio.h>

// Function to perform insertion sort on an array of size 'n'
void insertion_sort(int n, int array[n]) {
    int i, j, item;
    
    // Loop from the second element (index 1) to the end of the array
    for (i = 1; i < n; i++) {
        // Take the current element as the 'item' to be inserted into the sorted portion
        item = array[i];
        // Set 'j' to the index of the element before the current element
        j = i - 1;
        
        // Compare the 'item' with elements in the sorted portion and move elements to the right
        // until a suitable position for the 'item' is found
        while (j >= 0 && array[j] > item) {
            array[j + 1] = array[j]; // Move the element to the right
            j--; // Decrement 'j' to check the next element on the left
        }
        
        // Insert the 'item' at its correct sorted position
        array[j + 1] = item; // 'j + 1' is the correct position for 'item'
    }
    
    printf("Sorted array : \n");
    for (i = 0; i < n; i++) {
        printf("%d ", array[i]); // Print the sorted array elements
    }
}

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int array[n];
    printf("Enter array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]); // Input array elements from the user
    }

    insertion_sort(n, array); // Call the insertion_sort function to sort the array
    return 0;
}
