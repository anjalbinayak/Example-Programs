#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
	
	int arr[n];
	
	for (int i = 0; i < n; i++) cin>>arr[i];

	int f = 0; 
    for (int i = 0; i < n; i++){
        int s=0;
        for (int j = i; j < n; j++){
            s = s + arr[j];
            if(s==0){
                f=1;
                break;
            }
        }
        if(f==1)
            break;   //To break out from outer loop.
    }
    
    if(f==1)
        cout<<"Yes";
    else
        cout<<"No";
	return 0;
}