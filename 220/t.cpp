#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int sum = 0;
    for(int i = 10; i < 100; i++){
        if((((i/10 == 3) || (i%10) == 3))&&((i/10 != 2) && (i&&10 != 2))) sum++;
    }
    cout << sum << '\n';
}

