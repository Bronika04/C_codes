#include <stdio.h>
#include <stdlib.h>

// Structure to define a node in the BST
struct node {
    int data;
    struct node *left, *right;
};

// Function prototypes
struct node* insert(struct node* root);
void display(struct node* root);

// Function to insert nodes into the tree
struct node *insert(struct node *root) {
    int x;
    printf("Enter data (-1 for no node): ");
    scanf("%d", &x);
    
    if (x == -1) {
        return NULL;  // No node
    }
    
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    if (temp == NULL) {
        printf("Memory allocation error!\n");
        return NULL;
    }
    
    temp->data = x;
    printf("Enter left child of %d:\n", x);
    temp->left = insert(root);  // Recursively insert the left child
    
    printf("Enter right child of %d:\n", x);
    temp->right = insert(root);  // Recursively insert the right child
    
    return temp;  // Return the newly created node
}

// Function to perform inorder traversal (left, root, right) of the BST
void display(struct node* root) {
    if (root != NULL) {
        display(root->left);  // Visit left subtree
        printf("%d ", root->data);  // Visit root node
        display(root->right);  // Visit right subtree
    }
}

int main() {
    int ch, n;
    struct node *root = NULL;
    
    while (1) {
        printf("\nPress 1: Insert nodes 2: Display inorder 0: Exit \n");
        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch (ch) {
            case 1:
                root = insert(root);
                break;

            case 2:
                printf("BST in inorder traversal: ");
                display(root);
                printf("\n");
                break;

            case 0:
                exit(0);

            default:
                printf("Wrong choice... Use only the available options.\n");
        }
    }

    return 0;
}
