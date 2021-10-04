#include<iostream>
using namespace std;
 
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
 
void segregateEvenOdd(int nums[], int n)
{
    int left= 0, right = n-1;
    while (left < right)
    {
         while (nums[left]%2 == 0 && left < right)
            left++;
 
        while (nums[right]%2 == 1 && left < right)
            right--;
 
        if (left < right)
        {
            swap(&nums[left], &nums[right]);
            left++;
            right--;
        }
    }
}
 
int main()
{
    int n;
cout<<"how many numbers would you like to enter:";
cin>>n;
cout<<"\n\t Enter Array ";
int i,nums[n];
  for(i = 0;i<n;i++)
  {
     cout<<"\n\t Enter Value: ";
     cin>>nums[i];
}
    segregateEvenOdd(nums, n);
 
cout<<"\nArray after separation: ";
      for (int i=0; i < n; i++) 
      cout << nums[i] <<" ";
        return 0;
     }
