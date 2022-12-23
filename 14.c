#include<stdio.h>
void main()
{
    int m,n;
    printf("\n Enter no of row and column:");
    scanf("%d%d",&m,&n);
    int A[m][n],*orig,i,j,sum;
    printf("\n Enter the index(i,j):");
    scanf("%d%d",&i,&j);
    orig=&A[i][j];
    sum=A+i;
    sum=sum+(j*sizeof(A[i][j]));
    printf("%d is the address of (%d,%d) indexed element",sum,i,j);
    if(orig==sum)
        printf("\n Verify");
}
