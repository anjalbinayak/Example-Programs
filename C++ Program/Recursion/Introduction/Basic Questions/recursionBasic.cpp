
#include<iostream>
using namespace std;

//*Calculate factorial of a no.
int factorial(int n){
    if (n == 0)
    {
        return 1;
    }
    return n*factorial(n-1);
}

//*Print the nth Fibonacci number
int fib(int n){
    if (n == 1 || n == 0)
    {
        return n;
    }
    return fib(n-1)+ fib(n-2);
}

//*Calculate till sum n
int sum(int n){
    if (n==0)
    {
        return 0;
    }
    return n+sum(n-1);
}
  
//*Print nos. from n to 1 in decreasing order
void decreasing(int n){
    if (n==1)
    {
        cout<<1<<" ";
        return;
    }
    cout<<n<<" ";
    decreasing(n-1);
} 

//*Print nos. from 1 to n in increasing order
void increasing(int n){
    if (n == 1)
    {
        cout<<1<<" ";
        return;
    }
    increasing(n-1);
    cout<<n<<" ";
} 

int main(){
    int n;
    cin>>n;
    cout<<factorial(n)<<endl;
    cout<<fib(n)<<endl;
    cout<<sum(n)<<endl;
    decreasing(n);
    cout<<endl;
    increasing(n);
  return 0;
}
