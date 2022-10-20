#include <iostream>
#include <vector>

using namespace std;

vector<int> a;


/* Recurrence relation : T(n) = k + T(1/2n) + T(1/2n), for k \in \mathbb{N}
 * 
 * Each call of minmax seeks to divide our array into two halves, with two
 * additional minmax calls. When our space cannot be divided into two more roughly equal
 * subarrays, minmax begins returning function calls. As minmax backtracks, parent function calls
 * receive two pairs, which they spend at most two comparisons processing, before themselves returning.
 *
 */

pair<int,int> minmax(int l, int r){
    cout << "func call \n";
    if(l == r)return {a[l], a[r]};
    else if(r-l == 1){
        if(a[l] > a[r])return {a[r], a[l]};
        else return {a[l], a[r]};
    }
    auto p1 = minmax(l, (r+l)/2);
    auto p2 = minmax(((l+r)/2)+1, r);

    pair<int,int> ans;
    if(p1.first<p2.first) ans.first=p1.first;
    else ans.first = p2.first;
    if(p1.second>p2.second) ans.second=p1.second;
    else ans.second = p2.second;
    return ans;
}

int main(){
    ios_base::sync_with_stdio(false);  
//    cin.tie(NULL);
    int n;
    cout << "How many elements would you like to compare?"<<'\n';
    cin >> n;
    cout << "Input your "<<n<<" elements\n";
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        a.push_back(x);
    }
    auto ans = minmax(0, n-1);
    cout << "The max of your elements is "<<ans.second << " and the min of your elements is "<< ans.first << '\n';
}

