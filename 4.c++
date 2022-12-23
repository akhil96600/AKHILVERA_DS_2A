#include<iostream>
using namespace std;
int main()
{
    int a[10] = {1,2,3,4,5,6,7};
    int n=7;
    int posi;
    cin>>posi;                   
    for(int i=posi; i<n; i++)
    {
        a[i] = a[i+1];         
                               
    }
      n=n-1;       

    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
   return 0;
}