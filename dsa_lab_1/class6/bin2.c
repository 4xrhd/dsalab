#include <stdio.h>

int main(int argc, char const *argv[])
{
    int arr[] = {10, 20, 3, 4, 6, 11, 33};
    int size = sizeof(arr) / sizeof(arr[0]);
    int low = 0, high = size - 1;
    int mid = 0;
    int sc;
    printf("Enter element to search: ");
    scanf("%d", &sc);
    
    while (low <= high) {
        mid = low + (high - low) / 2;  // Corrected mid calculation
        
        if (arr[mid] == sc) {
            printf("Element found at index %d\n", mid);
            return 0;
        }
        else if (arr[mid] < sc) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    printf("Element not found\n");
    return 0;
}
