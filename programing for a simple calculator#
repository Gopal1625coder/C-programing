#include <stdio.h>
int main() {
    float num1,num2,result;
    char op;
    printf("SIMPLE CALCULATOR\n");
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c",&op);
    printf("Enter two numbers:");
    scanf("%f %f",&num1,&num2);
    switch(op) {
        case'+':
            result=num1+num2;
            printf("Result=%.2f\n",result);
            break;
        case'-':
            result=num1-num2;
            printf("Result=%.2f\n",result);
            break;
        case'*':
            result=num1*num2;
            printf("Result=%.2f\n",result);
            break;
        case'/':
            if(num2==0) {
                printf("Error! Division by zero is not allowed.\n");
            } else {
                result=num1/num2;
                printf("Result=%.2f\n",result);
            }
            break;
            default:
            printf("Invalid operator...\n");
        }
        return 0;

    }
