#include<stdio.h>   //CALL BY VALUE SMA
#include<stdlib.h>
#define MAX 10
int push(int [],int);
int pop(int [],int);
void disp(int [],int);
void peek(int [],int);
//void emp(int[]);

void main(){
    int stack[MAX],top=-1,ch,f;
    do{
        printf("Press 1 for insrtion \n Press 2 for deletion \n Press 3 for peek \n Press 4 for display\n");
      //  printf("\n1.Push\n2.Pop\n3.Display\n4.Peek\n5.Exit");
        scanf("%d",&ch);
        switch(ch){
            case 1:
            top=push(stack,top);
            break;

            case 2:
            top=pop(stack,top);
            break;

            case 3:
            disp(stack,top);
            break;

            case 4:
            peek (stack,top);
            break;

            default:
            printf("Wrong choice");
        }
        printf("If you want to conntinue press 0\n If you don't want to continue press 1\n");
        scanf("%d",&f);
    }while(f==0);
}

int push(int stack[],int top){
    int x;
    if(top==MAX-1)
    printf("Stack is full");
    else{
        printf("\n Enter the element to insert\n");
        scanf("%d",&x);
        top++;
        stack[top]=x;
    }
    return(top);
}
int pop (int stack[],int top){
    int x;
    if(top==-1)
    printf(" Stack is Empty\n");
    else{
        x=stack[top];
        printf("%d\n",x);
        top--;
    }
return(top);
}

void disp(int stack[],int top){
    int x;
    if(top==-1)
    printf("Stack is empty");
    else
    {
        while (top!=-1){
        printf("%d\n",stack[top]);
        top--;
    }
}
}

void peek(int stack[],int top){
    int x;
    if(top==-1)
    printf("Stack is Empty\n");
    else{
    x=stack[top];
    printf("%d\n",x);
    }
}