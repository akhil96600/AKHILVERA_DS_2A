#include<stdio.h>
void main()
{
    int A[100],i,n,key;
    printf("\n Enter no of elements in array:");
    scanf("%d",&n);
    printf("\n Enter elements of array in increasing order:");
    for(i=0;i<n;i++)
        scanf("%d",&A[i]);
    printf("\n Enter element to be inserted:");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        if(A[i]>=key)
        {
            A[i]=A[i]+key;
            key=A[i]-key;
            A[i]=A[i]-key;
        }
    }
    A[n]=key;
    printf("\n  array is:\n");
    for(i=0;i<=n;i++)
        printf("%d ",A[i]);

}