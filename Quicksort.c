//------------------------------------Quicksort--------------------------------
#include <stdio.h>

void swap(int *p1, int *p2) {
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;
    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return i + 1;
}

void quicksort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);

        quicksort(arr, low, pi - 1);
        quicksort(arr, pi + 1, high);
    }
}

int main() {
    int n;
    printf("Enter the size of the array\n");
    scanf("%d", &n);
    int arr[n]; // Define array with the size provided by the user
    printf("Enter the values\n");
    for (int k = 0; k < n; k++) {
        scanf("%d", &arr[k]);
    }
    quicksort(arr, 0, n - 1);
    printf("Sorted Array\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t", arr[i]);
    }
    return 0;
}
 