#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin >> n;
    ll sum = 1;
    ll MOD =1000000007;
    while (n--)
    {
        sum *= 2;
        sum %= MOD;
    }
    cout << sum << endl;
}
