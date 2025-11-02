#include<stdio.h>
int main() {
    int num,fact=1,i;
    printf("Enter a Positive Integer: ");
    scanf("%d",&num);
    if(num<0) {
        printf("Error! Factorial of a negative number doesn't exist.\n");
    } else {
        for(i=1;i<=num;i++) {
            fact*=i;
        }  
        printf("The Factorial of %d = %d",num,fact);
      }
      return 0;
    }
