#include<stdio.h>

void main()
{
    float i,j,fact,n,sum=0;

    printf("Enter value of n : ");
    scanf("%f",&n);

    for(i=1;i<=n;i++)
    {
        fact=1;
        for(j=1;j<=i;j++)
        {
            fact=fact*j;
        }

        sum=sum+(fact/(i+i));
    }

    printf("\n\nvalue is : %.2f",sum);
}
