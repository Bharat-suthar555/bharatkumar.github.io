#include<stdio.h>
int main()
{
    int i,fact=1,num;
    printf("Enter any number : ");
    scanf("%d",&num);
    for ( i = 1; i <=num ; i++)
    {
        fact=fact*i;
    }
    printf("Factorial of %d Is %d",num,fact);
}