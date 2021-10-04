#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    string s;
    cin >> s;
    ll n = s.size();
    vector<ll> A(26);
    for(int i=0;i<n;i++)
    {
        A[s[i] - 65]++;
    }
    ll o = 0;
    int pos;
    for(int i=0;i<26;i++)
    {
        if (A[i] % 2 == 1)
        {
            o++;
            pos = i;
        }
    }
    if (o > 1)
    {
        cout << "NO SOLUTION" << endl;
        return 0;
    }
    string ans = "";
    for(int i=0;i<26;i++)
    {
        if (i != pos)
        {
            ans += string(A[i] / 2, i + 'A');
        }
    }
    cout << ans;
    if (o == 1)
        cout << string(A[pos], pos + 'A');
    reverse(ans.begin(),ans.end());
    cout << ans << endl;
    return 0;
}
