//---------------------------------------------fibonacci--------------------------------------

#include<stdio.h>
int main()
{
    int n,i;
    printf("enter the no of elements in the series");
    scanf("%d",&n);
   printf("fibonacci series is");
   for(int i=0;i<n;i++)
   {
    printf("%d\t",fibo(i));
   }
}
int fibo(int n)
{
    if(n==0|n==1)
    {
        return n;
    }
    return fibo(n-1)+fibo(n-2);
}