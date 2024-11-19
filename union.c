#include<stdio.h>
int main(){
    int n;
    //,m;
    printf("Enter array size: ");
    scanf("%[^/n]",&n);
    int a[n],b[n];
    printf("Enter array 1 elements: ");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter array 2 elements: ");
    for(int i=0;i<n;i++){
        scanf("%d",&b[i]);
    }
    int c[2*n];
    for(int i=0;i<n;i++){
        a[i]=c[i];
    }
    // for(int i=0;i<2*n;i++){
    //     if(c[i]!=b[i]){
    //         c[]
    //     }
    // }
    for(int i=0;i<2*n;i++){
        printf("%d ",c[i]);
    }
    return 0;
}