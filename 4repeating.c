#include <stdio.h>
#define max 20

int main() {
    int n, i, j, count, repeatingCount = 0;
    
    // Input the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[max];
    
    // Input the elements
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Iterate through the array to find repeating elements
    for(i = 0; i < n; i++) {
        count = 0;

        // Check if arr[i] is repeating by comparing with previous elements
        for(j = 0; j < i; j++) {
            if(arr[i] == arr[j]) {
                count = 1;
                break;
            }
        }

        // If it's repeating, increment the repeatingCount
        if(count == 1) {
            repeatingCount++;
            // Check if it's the 4th repeating element
            if(repeatingCount == 4) {
                printf("The 4th repeating element is: %d\n", arr[i]);
                return 0;
            }
        }
    }

    // If there are less than 4 repeating elements
    printf("There are less than 4 repeating elements in the array.\n");

    return 0;
}
