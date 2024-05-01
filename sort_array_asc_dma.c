#include <stdio.h>
#include <stdlib.h>
int main() 
{
    int n,temp,*a,i,j;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    a = (int *)malloc(n * sizeof(int));
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (a[j] > a[j + 1]) 
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    printf("Sorted array in ascending order:\n");
    for (i = 0; i < n; i++) 
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    free(a);
    return 0;
}
