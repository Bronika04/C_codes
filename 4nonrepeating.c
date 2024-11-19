#include <stdio.h>
#define max 20

int main() {
    int n, i, j, count, nonRepeatingCount = 0;
    
    // Input the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[max];
    
    // Input the elements
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Iterate through the array to find non-repeating elements
    for(i = 0; i < n; i++) {
        count = 0;
        
        // Check if arr[i] is non-repeating
        for(j = 0; j < n; j++) {
            if(arr[i] == arr[j]) {
                count++;
            }
        }
        
        // If count is 1, it means arr[i] is non-repeating
        if(count == 1) {
            nonRepeatingCount++;
            // Check if it's the 4th non-repeating element
            if(nonRepeatingCount == 4) {
                printf("The 4th non-repeating element is: %d\n", arr[i]);
                return 0;
            }
        }
    }

    // If there are less than 4 non-repeating elements
    printf("There are less than 4 non-repeating elements in the array.\n");

    return 0;
}
