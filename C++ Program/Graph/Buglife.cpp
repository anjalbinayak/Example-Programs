// https://www.spoj.com/problems/BUGLIFE/   Problem link
// BUGLIF is impotant graph question

#include<iostream>
#include<vector>
using namespace std ;
 
 
vector<int> adj[2001] ;
int visited[2001];
int gender[2001];
 
bool dfs(int start , int g){
 
visited[start] = 1 ;
gender[start] = g ;
 
for(int x : adj[start]){
    if(visited[x] != 1){
        if(dfs(x , g^1) == false) return false ;
    }
    else{
        if(gender[x] == gender[start]) return false ;
    }
}
 
return true ;
 
}
 
int main(){
 
   int  t ;
   cin >> t ;
  for(int k = 1 ; k <= t ; k++)   {
    
    int v , e ;
    cin >> v >> e ;
    for(int i = 1 ; i <= v ; i++){
        adj[i].clear();
        visited[i] = 0 ;
    }
    for(int i = 1 ; i <= e ; i++){
        int st , en ;
        cin >> st >> en ;
        adj[st].push_back(en);
        adj[en].push_back(st);
    }
 
    bool a = true ;
 
    for(int i = 1; i <= v ; i++){
    if(visited[i] == 0)
     {
        bool res = dfs(i , 0) ;
        if(res == false) 
        {
            a = false ;
        }
     }
}
    cout<<"Scenario #"<<k<<":"<<endl;
    if(a == true) cout << "No suspicious bugs found!"<<endl;
    else cout<<"Suspicious bugs found!"<<endl;
    
     }
   
    return 0 ;
}