#include <bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    vector<vector<int>> vec;
    vector<vector<int>> vecans;


    int n,q;
    cin>>n>>q;
    for(int i=0;i<n;i++){
        int size;
        cin>>size;
        vector<int> vec1;
        for(int j=0;j<size;j++){
            int temp;
            cin>>temp;
            vec1.push_back(temp);
        }
        vec.push_back(vec1);
    }
    for(int i=0;i<q;i++){
        vector <int> vec2;

        for(int j=0;j<2;j++){  
            int temp;
            cin>>temp;
            vec2.push_back(temp);
        }
        vecans.push_back(vec2);
        
    }

    for(int i=0;i<q;i++){
        int ser=vecans[i][1];
        int ini=vecans[i][0];
        for(int j=0;j<vec[ini].size();j++){
               if(j==ser){
                   cout<<vec[ini][j]<<endl;
               }
        }
    }
    return 0;
}
