#include <bits/stdc++.h>
using namespace std;
int main(){
    string s ;
    cin >> s ;
    int n= s.size();
    int a=0;
    for (int i=0 ; i<n ; i++){
        if (s[i]=='a') {
            a+=1;
        }
    }
    cout << min(n , 2*a-1);
    return 0;
}