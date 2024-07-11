//--------------------------------------------SELECTION SORT------------------------------------------
#include<stdio.h>
int main()
{
    int a[10],n;
    printf("enter th esize of the array \n");
    scanf("%d",&n);
    printf("Enter th array elements \n");
    for(int e=0;e<n;e++)
    {
        scanf("%d",&a[e]);
    }
int minindex=0;
for(int i=0;i<n-1;i++)
{
    minindex=i;
    for(int j=i+1;j<n;j++)
    {
        if(a[j]<a[minindex])
        {
            minindex=j;
        }
    }
    int temp= a[minindex];
   a[minindex]=a[i];
   a[i]=temp;
}
for(int k=0;k<n;k++)
{
    printf("%d\t",a[k]);
}
return 0;
}