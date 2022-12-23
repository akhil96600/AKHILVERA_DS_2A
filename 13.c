#include <stdio.h>
void main()
{
    int n;
    printf("\n Enter size of array:");
    scanf("%d", &n);
    int A[n], *orig, i, sum, dec;
    printf("\n Enter the index:");
    scanf("%d", &i);
    orig = &A[i];
    sum = A + i;
    printf("%d is the address of %dth element ", sum, i);
    if (orig == sum)
        printf("\n Verify");
}