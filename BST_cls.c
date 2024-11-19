#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *left, *right;
};

struct Node* insert(struct Node* root, int data);
void display(struct Node* root);
void display_pre(struct Node* root);
void display_post(struct Node* root);

struct Node* insert(struct Node* root, int data) {
    struct Node* temp;
    if (root == NULL) {
        temp = (struct Node*)malloc(sizeof(struct Node));
        temp->data=data;
        temp->left = temp->right = NULL;
        return temp;
    }

    if (data < root->data) {
        root->left = insert(root->left, data);  // Insert into the left subtree
    } else if (data > root->data) {
        root->right = insert(root->right, data); // Insert into the right subtree
    }

    return root;
}

void display(struct Node* root) {   //lRr
    if (root != NULL) {
        display(root->left);  // Visit left subtree
        printf("%d ", root->data);  // Visit root node
        display(root->right);  // Visit right subtree
    }
}


void display_pre(struct Node* root) {    //Rlr
if(root!= NULL){
    // Print data of node
    printf("%d ", root->data);

    // Recur on left subtree
    display_pre(root->left);

    // Recur on right subtree
    display_pre(root->right);
}
}


void display_post(struct Node* root) {   //lrR
if(root!= NULL){

    // Recur on left subtree
    display_post(root->left);

    // Recur on right subtree
    display_post(root->right);

    // Print data of node
    printf("%d ", root->data);
}
}

int main() {
    int ch, n;
    struct Node *root = NULL;
    
    while (1) {
        printf("\nPress 1: Insert_nodes 2: Display_inorder 3:Preorder 4:Postorder 0: Exit \n");
        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch (ch) {
        
            case 1:
                printf("Enter data to insert: ");
                scanf("%d", &n);
                root = insert(root, n);
                break;

            case 2:
                printf("BST in inorder traversal: ");
                display(root);
                printf("\n");
                break;

            case 3:
                printf("BST in preorder traversal: ");
                display_pre(root);
                printf("\n");
                break;

             case 4:
                printf("BST in postorder traversal: ");
                display_post(root);
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
