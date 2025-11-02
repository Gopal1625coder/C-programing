#include<stdio.h>
#include<stdlib.h>
void main()
{
    float m,p,c,total,avg;
    printf("Enter marks of three subject=");
    scanf("%f%f%f",&m,&p,&c);
    total=m+p+c;
    avg=total/3.0;
    printf("Total Marks=%.2f\n",total);
    printf("Average Marks=%.2f\n",avg);
    if(avg>=90)

        printf("Grade=A\n");

     else if(avg>=80)

        printf("Grade=B\n");

    else if(avg>=70)

        printf("Grade=C\n");

   else  if(avg>=60)

        printf("Grade=D\n");

    else if(avg>=50)

        printf("Grade=E\n");

    if(m<50||p<50||c<50)
    {

        printf("The student has FAILED");
    }
    else
    {
        printf("The student has PASSED");
    }

}
