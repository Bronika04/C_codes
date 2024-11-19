#include<stdio.h>

int Binary_search(int arr[], int i, int j, int key) {
    // Base case: if the range is invalid, return -1 (key not found)
    
    if (i > j) {
        return -1;
    }

    else{
    int mid = i + (j - i) / 2; // Calculate mid index
    
    // Check if the middle element is the key
    if (key == arr[mid]) {
        return mid; // Key found, return its index
    } 
    else if (key < arr[mid]) {
        // Search in the left half
        return Binary_search(arr, i, mid - 1, key);
    } 
    else {
        // Search in the right half
        return Binary_search(arr, mid + 1, j, key);
    }
    }
}

int main() {
    int arr[] = {3, 5, 7, 9, 10, 12, 18};
    int i = 0;
    int j = sizeof(arr) / sizeof(arr[0]) - 1;
    int key = 18;
    
    int pos = Binary_search(arr, i, j, key);
    
    if (pos == -1) {
        printf("Key not found\n");
    } 
    else {
        printf("Key found at position: %d\n", pos + 1); // Output in 1-based index
    }
    
    return 0;
}
