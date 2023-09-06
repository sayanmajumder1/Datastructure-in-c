#include<stdio.h>
#include<stdlib.h>
void bubleshort(int * A, int n)
{
    int i, j, temp;
  for (i=0;i<n-1;i++)
 {
  for(j=0;j<n-1;j++)
 {
    if(A[j]>A[j+1])
     {

          temp=A[j];
          A[j]=A[j+1];
          A[j+1]=temp;

      }

  }
 }

}
int  main() {
    int i, n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
int *A = (int *)malloc(n * sizeof(int));
  if (A == NULL) {
        printf("Memory allocation failed!\n");
        return 1; // Exit with an error code
    }

    printf("Enter %d elements:\n", n);
    for ( i = 0; i < n; i++) 
    {
        scanf("%d", &A[i]);
    }

    printf("Original array: ");
    for ( i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

   
    bubleshort(A, n);

    printf("Sorted array: ");
    for ( i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");
return 0;
}

