#include<stdio.h>
int main()
{
    int a[5],sum=0,i;
    a[0]=2;
    a[1]=2;
    a[2]=3;
    a[3]=4;
    a[4]=5;

    for(i=0; i<5; i++)
    {
        sum = sum + a[i];
    }

    printf("The sum is %d\n",sum);
    printf("The average is %.2f",(float)sum/5);

}


Or,,,,,,,,,,,,,,,,,,,,,,,,,,,,,


#include<stdio.h>
int main()
{
    int a[5],sum=0,i;
    printf("Enter five numbers = ");
    for(i=0; i<5; i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0; i<5; i++)
    {
        sum = sum + a[i];
    }

    printf("The sum is %d\n",sum);
    printf("The average is %.2f",(float)sum/5);

}


Or,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,


#include<stdio.h>
int main()
{
    int a[5],sum=0,i;
    printf("Enter five numbers = ");
    scanf("%d %d %d %d %d",&a[0],&a[1],&a[2],&a[3],&a[4]);

    for(i=0; i<5; i++)
    {
        sum = sum + a[i];
    }

    printf("The sum is %d\n",sum);
    printf("The average is %.2f",(float)sum/5);

}


Or,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,


#include<stdio.h>                  // Ekhane shobgula number e sum korbo na, user er iccha moto jotogula number sum korte chay totogula korbo
int main()
{
    int a[100],sum=0,i,n;
    printf("How many numbers = ");
    scanf("%d",&n);  // n=10

    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0; i<n; i++)
    {
        sum = sum + a[i];
    }

    printf("The sum is %d\n",sum);
    printf("The average is %.2f",(float)sum/n);

}
