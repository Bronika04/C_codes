#include<stdio.h>
#define max 100
int main(){
    int arr[max],positive[max],negative[max],zeros[max];
    int i,n;
    int k=0,l=0,m=0;
    int cp=0,cn=0,cz=0;
    printf("How many elements you want to enter:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        if(arr[i]>0){
            positive[k]=arr[i];
            k++;
            cp++;
        }
        if(arr[i]<0){
            negative[l]=arr[i];
            l++;
            cn++;
        }
        if(arr[i]==0){
            zeros[m]=arr[i];
            m++;
            cz++;
        }
    }
    printf("Positive numbers: ");
    for(int i=0;i<cp;i++){
        printf("%d ",positive[i]);
    }
    printf("\nNegative numbers: ");
    for(int i=0;i<cn;i++){
        printf("%d ",negative[i]);
    }
    printf("\nZeros: ");
    for(int i=0;i<cz;i++){
        printf("%d ",zeros[i]);
    }
    printf("\nThere are %d number of zeroes",cz);
    printf("\nThere are %d number of positive no.",cp);
    printf("\nThere are %d number of negative no.",cn);
    
    return 0;
}