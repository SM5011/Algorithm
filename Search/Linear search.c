#include <stdio.h>

int main()
{
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int array[n];
    printf("Enter array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    int a;
    printf("Enter key for search: ");
    scanf("%d", &a); 

    for (int i = 0; i < n; i++)
    {
        if (array[i] == a)
        {
            printf("Found");
            return 0; // Adding return 0 to exit the program after finding the element
        }
    }

    printf("Not found"); // If the element is not found, print this message
    return 0;
}
