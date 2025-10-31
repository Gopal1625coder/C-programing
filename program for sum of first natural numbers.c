#include<stdio.h>
int main() {
int num,count,sum=0;
printf("Enter the positive integer: ");
scanf("%d",&num);
for(count=1;count<=num;count++)
{
    sum+=count;
}
printf("The sum of first %d natural numbers is: %d\n",num,sum);
return 0;
}
