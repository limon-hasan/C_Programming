// Finding factorial

#include<stdio.h>
int main()
{
    int n,i,fact =1;
    printf("Enter a number : ");
    scanf("%d,",&n);   // n=4

    for(i=1; i<=n; i++)
    {
        fact=fact*i;   // fact=24
    }

    printf("Factorial = %d\n",fact);

    return 0;
}
