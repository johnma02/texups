#include <bits/stdc++.h>

using namespace std;
struct a{
    int a, b;
};
a hello(a p){
    return p;
}
void solve(){
    a b = {1,2};
    cout <<hello(b).a<<'\n';
}

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
}

