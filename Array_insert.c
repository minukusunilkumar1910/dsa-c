#include <stdio.h>

int main() {
    int arr[100];
    int n, pos, value;
    int i;
    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
 
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    
    printf("Enter the position where you want to insert the element: ");
    scanf("%d", &pos);
    printf("Enter the value to insert: ");
    scanf("%d", &value);

    if(pos < 0 || pos>n)
    {
        printf("invalid position");
    }
    else
    {
        for(i=n;i>pos;i--)
        {
            arr[i+1]=arr[i];
        }
        arr[pos]=value;
        n++;
           printf("Array after insertion:\n");
        for(i = 0; i < n; i++)
         {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}
