//------------------------------------BINARY SEARCH------------------------------------
#include<stdio.h>
int main()
{   int a[10],i,n,target;
  
    int found=0;
    printf("Enter the size of the array \n");
    scanf("%d",&n);

    printf("Enter the array elements ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
     int low=0,high=n;
    printf("Enter the Target element ");
    scanf("%d",&target);
    int  mid =(low+high)/2;
    while(low <= high)
    {  
    if(a[mid] ==  target)
       {
        printf("Target %d is found at %d position",target,mid+1);
        found = 1;
        break;
       }
    else if(target > a[mid] )
       {
        low = mid +1;
       }
     else if( target < a[mid])
       {
        high = mid-1;
       }
    }
    //
    if(!found)
    {
        printf("Target element is not found");
    }
    return 0;
}
