#include <stdio.h>
void display( int a[],int n) 
{
    int i;
    printf("Array elements:");
    for(i=0;i<n;i++)
    printf("%d ",a[i]);
}
int main() {
    int a[5]={10,20,30,40,50};
    display(a,5);
    return 0;
}
