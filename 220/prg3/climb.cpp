#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);  
//    cin.tie(NULL);

    long long n;
    cout << "Enter the number of steps you wish to calculate:\n";
    cin >> n;
    long long dp[n+1];
    memset(dp, 0, sizeof(dp));
    dp[0]=0;
    dp[1]=1;
    dp[2]=1;
    dp[3]=2;
    dp[4]=3;
    dp[5]=5;
    for(int i = 6; i <= n; i++){
        dp[i]=dp[i-1]+dp[i-3]+dp[i-5];
    }
    cout << "There are "<< dp[n]<<" to climb to step "<<n<<'\n';

}

