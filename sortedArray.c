#include <stdio.h>
int main() {
    int a[10];
    printf("Enter 5 sorted integers:\n");
    for(int i=0;i<5;i++)
        scanf("%d",&a[i]);
    int n=5 ,i , value;
    printf("Enter the value to be inserted: ");
    scanf("%d",&value);
    for(i=n-1;i>=0 && a[i]>value;i--)
    a[i+1]=a[i];
    a[i+1]=value;
    n++;
    printf("Array after insertion:\n");
    for(i=0;i<n;i++)
    printf("%d ",a[i]);
    return 0;
}
