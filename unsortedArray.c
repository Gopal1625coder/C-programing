#include <stdio.h>
int main() {
    int a[10],i,j,temp;
    printf("Enter 5 unsorted integers:\n");
    for(int i=0;i<5;i++)
        scanf("%d",&a[i]);

        for(i=0;i<5-1;i++) {
            for(j=0;j<5-i-1;j++) {
                if(a[j]>a[j+1]){
                    temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
                }
            }
        }
        printf("Sorted Array=\n");
        for (i=0; i<5;i++)
        printf("%d ",a[i]);

          int low = 0, high = 5, mid, key;

    printf("\nEnter the element to be searched:\n ");
    scanf("%d", &key);

    while (low <= high) {
        mid = (low + high) / 2;

        if (a[mid] == key) {
            printf("Element %d found at position %d\n", key, mid + 1);
            return 0;
        }
        else if (key < a[mid]) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    printf("Element %d not found in the array\n", key);

    return 0;
}
