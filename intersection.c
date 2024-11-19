#include<stdio.h>
int main(){
    int n,m;
    printf("Enter sizes of arrays: ");
    scanf("%d %d",&n,&m);
    int a[n],b[m];
    printf("Enter array 1 elements:" );
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter array 2 elements:" );
    for(int i=0;i<m;i++){
        scanf("%d",&b[i]);
    }
    printf("INTERSECTIONS: ");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i]==b[j]){                                   //not valid in every case-->1,2,3,4,4-->4,4,3,1
                printf("%d ",a[i]);
            }
        }
    }
    return 0;
}