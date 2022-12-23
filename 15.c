#include<stdio.h>
void main()
{
    int m,n,o;
    printf("\n Enter no of rows,columns and pages:");
    scanf("%d%d%d",&m,&n,&o);
    int A[m][n][o],*orig,i,j,k,sum;
    printf("\n Enter the index(i,j,k):");
    scanf("%d%d%d",&i,&j,&k);
    orig=&A[i][j][k];
    sum=A+i;
    sum+=(j*o*sizeof(A[i][j][k]));
    sum=sum+(k*sizeof(A[i][j][k]));
    printf("%d is the address of (%d,%d,%d) indexed element",sum,i,j,k);
    if(orig==sum)
        printf("\n Verify");
}
