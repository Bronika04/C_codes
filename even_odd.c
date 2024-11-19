#include<stdio.h>
int main(){
    int n;
    printf("Enter array size");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int ce=0,co=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            ce++;
        }
        else{
            co++;
        }
    }
    printf("\nThere are %d even number",ce);
    printf("\nThere are %d odd number",co);
    return 0;
}

// To analyze the time and space complexity of a C program that stores `N` elements in a 1D array and counts the total even and odd elements, we can break down the operations involved:

// ### Time Complexity

// 1. **Array Input:** The program takes `N` elements as input and stores them in an array. This operation involves iterating over `N` elements, so the time complexity is \(O(N)\).

// 2. **Counting Even and Odd Elements:** The program iterates through the array once to count the even and odd elements. This involves another pass over all `N` elements, giving this part a time complexity of \(O(N)\).

// The overall time complexity of the program is the sum of the time complexities of these operations, which is \(O(N) + \(O(N) = O(N)\). Thus, the time complexity of the program is \(O(N)\).

// ### Space Complexity

// 1. **Array Storage:** The program uses a 1D array to store `N` elements. This requires space proportional to the number of elements, which is \(O(N)\).

// 2. **Auxiliary Variables:** A few integer variables (such as `even_count`, `odd_count`, and loop counters) are used. These variables require constant space, \(O(1)\).

// The dominant factor in space usage is the array, so the space complexity is \(O(N)\).

// ### Summary

// - **Time Complexity:** \(O(N)\), where \(N\) is the number of elements in the array.
// - **Space Complexity:** \(O(N)\), primarily due to the array storing the elements.

// This analysis assumes that \(N\) can vary and that the array size and input elements are the primary contributors to the complexity.