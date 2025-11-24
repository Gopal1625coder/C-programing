#include <stdio.h>
int main() {
    int a[5] = {5, 10, 15, 20, 25};
    int i, key, j=0;
    printf("Enter the element to be searched: ");
    scanf("%d", &key);
    for(i=0;i<5;i++) {
        if(a[i] == key) {
            j=1;
            break;
        }
    }
        if(j) 
        printf("Element %d found at position %d\n", key, i+1);
        else
        printf("Element %d not found in the array\n", key);
         return 0;
}
