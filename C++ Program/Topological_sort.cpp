#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define f(i,a,n) for(int i=a;i<n;i++)
#define vi vector<int>
#define vvi vector<vector<int>>
#define pb push_back
#define se(a) a.begin(),a.end()
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    int cnt=0;
    vvi adj(n);
    vi indeg(n,0);
    for(int i=0;i<m;i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].pb(v);
        indeg[v]++;
    }
    queue<int> pq;
    for(int i=0;i<n;i++){
        if(indeg[i]==0)
            pq.push(i);
        
    }
    while(!pq.empty()){
        cnt++;
        int x=pq.front();
        pq.pop();
        cout<<x<<" ";
        for(auto it : adj[x])
        {
            indeg[it]--;
            if(indeg[it]==0)
                pq.push(it);
            
        }
    }
    return 0;
}
