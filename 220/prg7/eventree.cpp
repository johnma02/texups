#include <bits/stdc++.h>

using namespace std;

const int N = 1e3;

vector<int> adj[N];
vector<bool> vis(N);
//vector<int> child(N);
int ans = 0;
int dfs(int node){
    vis[node]=1;
    int children=0;
    for(auto u : adj[node]){
        if(!vis[u]){
            children+=1+dfs(u);
        }
    }
    if((children%2 == 1) && (node !=0))ans++;
    //child[node] = children;
    return children;
}

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int n = 8;
    adj[0] = {1,2};
    adj[2] = {3,4};
    adj[3] = {5,6,7};

    /*
    for(int i = 0; i < n; i++){
        cout << i << ": ";
        for(auto j : adj[i]) cout << j << " ";
        cout << '\n';
    }
    */
    dfs(0);
    /*
    for(int i = 0; i < n; i++){
        cout << i << " : "<<child[i] << '\n';
    }
    */
    cout << ans << '\n';
}

