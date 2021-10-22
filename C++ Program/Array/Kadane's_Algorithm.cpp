///Kadane's Algorithm
#include<bits/stdc++.h>
using namespace std;
 
int maxSubArraySum(int a[], int size)
{
   int maxi = a[0];
   int curx = a[0];
 
   for (int i = 1; i < size; i++)
   {
        curx = max(a[i], curx+a[i]);
        maxi = max(maxi, curx);
   }
   return maxi;
}
 int main()
{
   int a[] =  {-2, -5, 9, -11, -4, 1, 5, 7};
   int n = sizeof(a)/sizeof(a[0]);
   int max_sum = maxSubArraySum(a, n);
   cout << "Maximum contiguous sum is " << max_sum;
   return 0;
}
