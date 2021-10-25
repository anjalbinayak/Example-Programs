// Problem Link- https://www.spoj.com/problems/PPATH/


#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<int> adj[100001];
int v[100001];
int dist[100001];
vector<int> prime;

bool isprime(int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

bool makepair(int a, int b)
{
    int c = 0;
    while (a > 0)
    {
        if (a % 10 != b % 10)
            c++;
        a /= 10;
        b /= 10;
    }
    if (c == 1)
        return true;
    else
        return false;
}

void bfs(int n)
{
    queue<int> q;
    q.push(n);
    v[n] = 1;
    dist[n] = 0;
    while (!q.empty())
    {
        int curr = q.front();
        q.pop();
        for (int x : adj[curr])
        {
            if (v[x] != 1)
            {
                v[x] = 1;
                dist[x] = dist[curr] + 1;
                q.push(x);
            }
        }
    }
}

void buildgraph()
{

    for (int i = 1000; i <= 9999; i++)
    {
        if (isprime(i))
        {
            prime.push_back(i);
        }
    }

    for (int i = 0; i < prime.size(); i++)
    {
        for (int j = i + 1; j < prime.size(); j++)
        {
            int a = prime[i];
            int b = prime[j];
            if (makepair(a, b))
            {
                adj[a].push_back(b);
                adj[b].push_back(a);
            }
        }
    }
}

int main()
{
    int t;
    cin >> t;
    buildgraph();

    while (t--)
    {
        int n, m;
        cin >> n >> m;
        for (int i = 1000; i <= 9999; i++)
        {
            dist[i] = -1;
            v[i] = 0;
        }
        bfs(n);
        if (dist[m] == -1)
        {
            cout << "Impossible" << endl;
        }
        else
            cout << dist[m] << endl;
    }

    return 0;
}