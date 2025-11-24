#include <stdio.h>
int main() {
    int a[10]={10,20,30,40,50};
    int n=5;
    int value = 35,i;
    for(i=n-1;i>=0 && a[i]>value;i--)
    a[i+1]=a[i];
    a[i+1]=value;
    n++;
    printf("Array after insertion:\n");
    for(i=0;i<n;i++)
    printf("%d ",a[i]);
    return 0;
}
