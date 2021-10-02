#include<iostream>
using namespace std;
int *arr;     //declare a global array

void selectionSort(int size)
{
      int min,temp;
      for(int i=0;i<size;i++)
      {
          min = i;
          for(int j=i+1;j<size;j++)
          {
              if(arr[j]<arr[min])
              min=j;
          }

          temp = arr[min];   //swapping the ith element with the minimum element
          arr[min] = arr[i];
          arr[i] = temp;
      }
}

int main()
{
    int n;
    cout<<"\n\n\n\nEnter the size of the array\n"; //getting size of array from the user
    cin>>n;
    arr = new int[n];
    for(int i=0;i<n;i++)               //Array input from user
    cin>>arr[i];

    selectionSort(n);                //Calling selection sort function
    
    cout<<"Sorted array:\n";

    for(int i=0;i<n;i++)            //printing sorted array
    cout<<arr[i]<<" ";
    cout<<"\n\n\n\n";
}