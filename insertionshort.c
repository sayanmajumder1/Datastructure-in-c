#include<stdio.h>

void insertion(int *a, int n)
{

int i, j, current;
for(i=1; i<n ; i++){
current = a[i];
j=i-1;
    while(j>=0 && a[j]>current)
    {

a[j+1]=a[j];
j--;

    }
a[j+1]=current;

}
}int main() {
    int arr[] = {12, 11, 13, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    insertion(arr, n);

    printf("\nSorted Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}