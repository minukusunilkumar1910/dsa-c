//--------------------------------------insertion sort-----------------------------------
#include <stdio.h>      // Insertion sort 

int main() {
    int n;

   
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

   
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

  
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

   
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }

    
    printf("Sorted array: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
