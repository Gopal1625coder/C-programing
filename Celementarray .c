#include <stdio.h>
void main()
{
    int a[100],n;
    int  i,N_pos=0,N_neg=0,N_zero=0;
    int N_even=0,N_odd=0;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    printf("Enter %d elements:\n",n);
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    } 
      for(i=0;i<n;i++)
      {
          if(a[i]>0)
          N_pos++;
          else if(a[i]<0)
          N_neg++;
          else
          N_zero++;
      
      if (a[i]%2==0)
      N_even++;
      else 
       N_odd++;
       }  
    printf("\n Array Statistics:\n");
    printf("Total elements; %d\n",n);
    printf("Positive elements: %d\n",N_pos);
    printf("Negative elements: %d\n",N_neg);
    printf("Zero elements: %d\n",N_zero);
    printf("Even elements: %d\n",N_even);
    printf("Odd elements: %d\n",N_odd);
}
