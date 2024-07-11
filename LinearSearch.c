
//---------------------------------------LINEAR SEARCH---------------------------------
#include<stdio.h>
int main()
{
int a[5],i,n;
int target;
int found =0;
printf("enter the size of the array\n");
scanf("%d",&n);
printf("Enter the array values");
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
printf("Enter the target element to search ");
scanf("%d",target);
for(i=0;i<n;i++)
{
  if(a[i] == target)
  {
    printf("target element %d found at %d position",target,i+1);
    found=1;
    break;
    
  }
}
if(!found)
  {
    printf("target element %d not found",target);
    
  }


}
