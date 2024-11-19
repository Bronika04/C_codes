#include <stdio.h>

int Binary_search(int arr[], int i, int j, int key) {
    int mid;
    while (i <= j) {
        mid = i + (j - i) / 2; // Calculate mid to avoid overflow
        
        if (key == arr[mid]) {
            return mid; // Key found, return its index
        } 
        else if (key < arr[mid]) {
            j = mid - 1; // Search in the left half
        } 
        else {
            i = mid + 1; // Search in the right half
        }
    }
    return -1; // Key not found
}

int main() {
    int arr[] = {3, 5, 7, 9, 10, 12, 18};
    int i = 0;
    int j = sizeof(arr) / sizeof(arr[0]) - 1;
    int key = 2; // Key to search for
    
    int pos = Binary_search(arr, i, j, key);
    
    if (pos == -1) {
        printf("Key not found\n");
    } 
    else {
        printf("Key found at position: %d\n", pos + 1); // Output in 1-based index
    }
    
    return 0;
}
