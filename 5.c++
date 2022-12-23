#include<iostream>
using namespace std;
int main()
{
    int n,l,u;
    cin>>n>>l>>u;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int add1 = 0;
    for(int i=0; i<n; i++)
    {
        add1 = add1 + a[i];
    }
    int add2=0;
    for(int i=l; i<=u; i++)
    {
        add2 = add2 + i;
    }
    cout<<add2 - add1;

   return 0;
}