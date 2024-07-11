
//--------------------------------------------reverse an array------------------------------

#include<stdio.h>
void main()
{
    int a[5],i,n;
    printf("enter the size of the array\n");
    scanf("%d",&n);
    printf("enter the array elements\n ");
    for(i=0;i<=n;i++)
    {
        scanf("%d\t",&a[i]);
    }
    printf("the actual array elements are\n ");
    for(int j=0;j<=n;j++){
    printf("%d\t",a[j]);
    }
    printf("After reversing the array elements \n");
    for(int i=n;i>=0;i--){
        printf("%d\t",a[i]);
    }
    
}