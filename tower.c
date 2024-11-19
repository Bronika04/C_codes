
#include <stdio.h>

// Function to move disks
void moveDisk(int n, char source, char destination, char auxiliary) {
    if (n == 1) {
        // Move a single disk from source to destination
        printf("Move disk 1 from %c to %c\n", source, destination);
        return;
    }
    
    // Move n-1 disks from source to auxiliary, using destination as auxiliary
    moveDisk(n - 1, source, auxiliary, destination);
    
    // Move the nth disk from source to destination
    printf("Move disk %d from %c to %c\n", n, source, destination);
    
    // Move the n-1 disks from auxiliary to destination, using source as auxiliary
    moveDisk(n - 1, auxiliary, destination, source);
}

int main() {
    int n;

    // Get number of disks from user
    printf("Enter the number of disks: ");
    scanf("%d", &n);

    // Call the function to solve Tower of Hanoi
    moveDisk(n, 'A', 'C', 'B'); // A, B, C are names of rods
    
    return 0;
}
