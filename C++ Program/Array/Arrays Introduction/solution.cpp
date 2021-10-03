#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;      //declaring size of array
    cin>>n;     // input of size of array
    int arr[n];    // declaration of array
    for(int i=0;i<n;i++){
        cin>>arr[i];        //entering numbers in array
    }
    for(int i=n-1;i>=0;i--){
        cout<<arr[i]<<" ";      //printing elements of the array arr
    }
    return 0;
}
