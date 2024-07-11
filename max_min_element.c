//--------------------------------------------MAX & MIN -------------------------------------
#include<stdio.h>
int main()
{
int a[10],n,i,max=0,min=0;
printf("Enter the no of elements in an array");
scanf("%d",&n);
printf("enter the elements");
for(i=0;i<n;i++){
    scanf("%d",&a[i]);
}
max=a[0];
min=a[0];
for(i=0;i<n;i++)
{
    if(a[i]>max)
    {
        max=a[i];
    }
    if(a[i]<min)
    {
        min=a[i];
    }
}
printf("max element is %d\n",max);
printf("min element is %d ",min);
return 0;
}
