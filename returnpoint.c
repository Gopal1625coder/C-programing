#include<stdio.h>
int* getElement(int arr[], int index) {
    return &arr[index];
}
int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr = getElement(arr, 3); 
    printf("Element at index 3 is: %d\n", *ptr);
    return 0;
}
