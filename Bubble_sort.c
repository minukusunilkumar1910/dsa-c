//-------------------------------------------BUBBLE SORT-------------------------------------
#include<stdio.h>
int main()
{
    int a[10],n,i,j;
    printf("Enter the size of the array");
    scanf("%d",&n);

    printf("Enter the elements into the array ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

 for(int t=0;t<n;t++)
 {
    for(i=0;i<n;i++)
    {
        if(a[i] > a[i+1])
        {
            int temp =a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
        }
    }
 }    
    for(j=0;j<n;j++)
    {
        printf("%d\t",a[j]);
    }

}
