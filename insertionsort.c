#include <stdio.h>
int main() {
    int a[5] = {12, 11, 13, 5, 6};
    int i,key,j;
    for(i=1;i<5;i++){
        key=a[i];
        j=i-1;
        while(j>=0 && a[j]>key){
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=key;
    }
    printf("Sorted array: \n");
    for(i=0;i<5;i++)
    printf("%d ",a[i]);
    return 0;
} 
