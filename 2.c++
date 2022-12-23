#include <iostream>
using namespace std;
int main()
{
   int a[11] = {1, 2, 3, 4, 5, 6, 7,8};
   int n;
   n = 8;
   int posi, key;
   cin >> posi >> key;

   for (int i = n; i >= posi; i--)
   {
      a[i+1]=a[i];                        
   }

   a[posi] = key;                         
   n = n+1;                               
                                          
   for(int i=0;i<n;i++)
   {
      cout<<a[i]<<" ";
   }




//USING WHILE LOOP METHOD

      // int i=n;
      // while(i>=pos)
      // {
      //    a[i+1]=a[i];
      //    i--;
      // }
      // a[pos] = key;
      // n = n+1;

      // for(int i=0;i<n;i++)
      // {
      //    cout<<a[i]<<" ";
      // }

      return 0;
}