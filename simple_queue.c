//.............................SMA BY CALL BY VALUE..............................

// #include<stdio.h>
// #define max 10   

// int enq(int [],int);                          
// int Deq(int [],int,int);
// void Disp(int [],int,int);
// void Peek(int [],int,int);

// int main(){
//     int Q[max],f=-1,r=-1,ch;
//   do{
//         scanf("%d",&ch);
//         switch(ch){

//         case 1:
//         r=enq(Q,r);
//         if(f==-1)
//         f=0;
//         break;

//         case 2:
//         f=Deq(Q,f,r);
//         if(f==-1)
//         r=-1;
//         break;

//         case 3:
//         Disp(Q,f,r);
//         break;

//         case 4:
//         Peek(Q,f,r);
//         break;

//         default:
//         printf("Wrong choice entered");
//         break;

//     }
//     }while(ch<=4);
// }

// int enq(int Q[],int r){
//     int x;
//     if(r==max-1)
//     printf("Overflow");
//     else{
//         scanf("%d",&x);
//         r++;
//         Q[r]=x;
//     }
//     return r;
// }

// int Deq(int Q[],int f,int r){
//     int x;
//     if(f==-1 && r==-1)
//     printf("Empty");                            //fifo
//     else{
//         x=Q[f];
//         printf("%d",x);
//         if(f==r)
//         f=-1;
//         else
//         f++;
//     }
//     return f;
// }

// void Disp(int Q[],int f,int r){
//     if(f==-1 && r==-1)
//     printf("Empty");
//     else{
//         while(f<=r){
//             printf("%d",Q[f]);
//             f++;
//         }
//         //printf("%d ",Q[f]);
//     }
// }

// void Peek(int Q[],int f,int r){
//     if(f==-1 && r==-1)                             
//     printf("Empty");
//     else{
//          printf("%d",Q[f]);                                 //fifo
//     }
// }



//..........................................SMA BY CALL BY REFRENCE.........................................
// #include<stdio.h>
// #define max 10     

// void enq(int [], int*);                          
// void Deq(int [], int*,int*);
// void Disp(int [],int*,int*);
// void Peek(int [],int*,int*);

// int main(){
//     int Q[max],f=-1,r=-1,ch;
//   do{
//         scanf("%d",&ch);
//         switch(ch){

//         case 1:
//         enq(Q,&r);
//         if(f==-1)
//         f=0;
//         break;

//         case 2:
//         Deq(Q,&f,&r);
//         if(f==-1)
//         r=-1;
//         break;

//         case 3:
//         Disp(Q,&f,&r);
//         break;

//         case 4:
//         Peek(Q,&f,&r);
//         break;

//         default:
//         printf("Wrong choice entered");
//         break;

//     }
//     }while(ch<=4);
// }

// void enq(int Q[],int* r){
//     int x;
//     if(*r==max-1)
//     printf("Overflow");
//     else{
//         scanf("%d",&x);
//         (*r)++;
//         Q[*r]=x;
//     }
//   //  return r;
// }

// void Deq(int Q[],int* f,int* r){
//     int x;
//     if(*f==-1 && *r==-1)
//     printf("Empty");                            //fifo
//     else{
//         x=Q[*f];
//         printf("%d",x);
//         if(*f==*r)
//         *f=-1;
//         else
//         (*f)++;
//     }
//    // return f;
// }

// void Disp(int Q[],int* f,int* r){
//     if(*f==-1 && *r==-1)
//     printf("Empty");
//     else{
//         while(*f<=*r){
//             printf("%d",Q[*f]);
//             (*f)++;
//         }
//         //printf("%d ",Q[f]);
//     }
// }

// void Peek(int Q[],int* f,int* r){
//     if(*f==-1 && *r==-1)                             
//     printf("Empty");
//     else{
//          printf("%d",Q[*f]);                                 //fifo
//     }
// }
                                    

//............................................DMA call by value.....................................................

#include<stdio.h>
#include<stdlib.h>
#define max 10   

int enq(int*, int);                          
int Deq(int*, int,int);
void Disp(int*,int,int);
void Peek(int*,int,int);

int main(){
      int *Q;
      Q=(int*)malloc(max*sizeof(int));
    int f=-1,r=-1,ch;
  do{
        scanf("%d",&ch);
        switch(ch){

        case 1:
        r=enq(Q,r);
        if(f==-1)
        f=0;
        break;

        case 2:
        f=Deq(Q,f,r);
        if(f==-1)
        r=-1;
        break;

        case 3:
        Disp(Q,f,r);
        break;

        case 4:
        Peek(Q,f,r);
        break;

        default:
        printf("Wrong choice entered");
        break;

    }
    }while(ch<=4);
}

int enq(int* Q,int r){
    int x;
    if(r==max-1)
    printf("Overflow");
    else{
        scanf("%d",&x);
        r++;
        *(Q+r)=x;
    }
   return r;
}

int Deq(int* Q,int f,int r){
    int x;
    if(f==-1 && r==-1)
    printf("Empty");                            //fifo
    else{
        x=*(Q+f);
        printf("%d",x);
        if(f==r)
        f=-1;
        else
        f++;
    }
   return f;
}

void Disp(int* Q,int f,int r){
    if(f==-1 && r==-1)
    printf("Empty");
    else{
        while(f<=r){
            printf("%d",*(Q+f));
            f++;
        }
        //printf("%d ",Q[f]);
    }
}

void Peek(int* Q,int f, int r){
    if(f==-1 && r==-1)                             
    printf("Empty");
    else{
         printf("%d",*(Q+f));                                 //fifo
    }
}

   
//................................................. DMA CALL BY REFRENCE.............................................

// #include<stdio.h>
// #include<stdlib.h>
// #define max 10    

// void enq(int*, int*);                          
// void Deq(int*, int*,int*);
// void Disp(int*,int,int);
// void Peek(int*,int*,int*);

// int main(){
//     int *Q;
//     Q=(int*)malloc(max*sizeof(int));
//     int f=-1,r=-1,ch;
//   do{
//         scanf("%d",&ch);
//         switch(ch){

//         case 1:
//         enq(Q,&r);
//         if(f==-1)
//         f=0;
//         break;

//         case 2:
//         Deq(Q,&f,&r);
//         if(f==-1)
//         r=-1;
//         break;

//         case 3:
//         Disp(Q,f,r);
//         break;

//         case 4:
//         Peek(Q,&f,&r);
//         break;

//         default:
//         printf("Wrong choice entered");
//         break;

//     }
//     }while(ch<=4);
// }

// void enq(int* Q,int* r){
//     int x;
//     if(*r==max-1)
//     printf("Overflow");
//     else{
//         scanf("%d",&x);
//         (*r)++;
//         Q[*r]=x;
//     }
//   // return r;
// }

// void Deq(int* Q,int* f,int* r){
//     int x;
//     if(*f==-1 && *r==-1)
//     printf("Empty");                            //fifo
//     else{
//         x=Q[*f];
//         printf("%d",x);
//         if(*f==*r)
//          (*f)=-1;
//         else
//         (*f)++;
//     }
//    //return f;
// }

// void Disp(int* Q,int f,int r){
//     if(f==-1 && r==-1)
//     printf("Empty");
//     else{
//         while(f<=r){
//             printf("%d",Q[f]);
//             f++;
//         }
//         //printf("%d ",Q[f]);
//     }
// }

// void Peek(int* Q,int* f, int* r){
//     if(*f==-1 && *r==-1)                             
//     printf("Empty");
//     else{
//          printf("%d",Q[*f]);                                 //fifo
//     }
// }