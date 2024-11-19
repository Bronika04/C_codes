#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define MAX 100

// Stack structure
typedef struct {
    int top;
    char items[MAX];
} Stack;

// Initialize the stack
void initStack(Stack *s) {
    s->top = -1;
}

// Check if stack is empty
int isEmpty(Stack *s) {
    return s->top == -1;
}

// Push operation
void push(Stack *s, char c) {
    if (s->top == (MAX - 1)) {
        printf("Stack overflow\n");
        exit(1);
    } else {
        s->items[++(s->top)] = c;
    }
}

// Pop operation
char pop(Stack *s) {
    if (isEmpty(s)) {
        printf("Stack underflow\n");
        exit(1);
    } else {
        return s->items[(s->top)--];
    }
}

// Peek at the top element of the stack
char peek(Stack *s) {
    if (isEmpty(s)) {
        printf("Stack is empty\n");
        exit(1);
    } else {
        return s->items[s->top];
    }
}

// Function to determine precedence of operators
int precedence(char c) {
    switch (c) {
        case '+':
        case '-':
            return 1;
        case '*':
        case '/':
            return 2;
        case '^':
            return 3;
        default:
            return -1;
    }
}

// Function to check if the character is an operator
int isOperator(char c) {
    return c == '+' || c == '-' || c == '*' || c == '/' || c == '^';
}

// Function to convert infix to postfix
void infixToPostfix(char* infix, char* postfix) {
    Stack s;
    initStack(&s);
    int i = 0, j = 0;
    
    while (infix[i] != '\0') {
        // If the character is an operand, add it to the output
        if (isalnum(infix[i])) {
            postfix[j++] = infix[i];           //j++-->post increament j=0,1,2,3 --> acha way hai
        }
        // If the character is '(', push it onto the stack
        else if (infix[i] == '(') {
            push(&s, infix[i]);
        }
        // If the character is ')', pop and output from the stack until '(' is found
        else if (infix[i] == ')') {
            while (!isEmpty(&s) && peek(&s) != '(') {
                postfix[j++] = pop(&s);
            }
            pop(&s); // Remove '(' from the stack
        }
        // If an operator is found
        else if (isOperator(infix[i])) {
            while (!isEmpty(&s) && precedence(peek(&s)) >= precedence(infix[i])) {
                postfix[j++] = pop(&s);
            }
            push(&s, infix[i]);
        }
        i++;
    }

    // Pop all the operators from the stack
    while (!isEmpty(&s)) {
        postfix[j++] = pop(&s);
    }

    postfix[j] = '\0'; // Null terminate the postfix expression
}

int main() {
    char infix[MAX], postfix[MAX];
    
    printf("Enter an infix expression: ");
    gets(infix);  // Consider using fgets in a production environment
    
    infixToPostfix(infix, postfix);
    
    printf("Postfix expression: %s\n", postfix);
    
    return 0;
}