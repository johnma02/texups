#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);  
//    cin.tie(NULL);

//    int comparisons = 0;
    cout << "Enter the number of elements you wish to compare\n";
    int n; cin >> n;
    cout << "Enter your "<<n<<" elements: ";
    cout<<'\n';
    
    vector<int> a(n);
    for(auto &i : a)cin>>i;

    vector<int> b, c;
        
    for(int i = 0; i < n/2; i++){
        if(a[i] < a[n/2+i]){
            b.push_back(a[i]);
            c.push_back(a[n/2+i]);
        }
        else{
            b.push_back(a[n/2+i]);
            c.push_back(a[i]);
        }
//        comparisons++;
    }
    int min_a = a[0];
    for(int i = 0; i < n/2; i++){
        if(b[i] < min_a)min_a=b[i];
//        comparisons++;
    }
    int max_a = a[0];
    for(int i = 0; i < n/2; i++){
        if(c[i] > max_a)max_a = c[i];
//        comparisons++;
    }
    //check odd element (shen says n will always be odd)
    /*
    if(n&1){
        if(a[n-1]>max_a)max_a=a[n-1];
        else if(a[n-1]<min_a)min_a=a[n-1];
        comparisons+=2;
    }
    */

    cout << "The max of your elements is "<< max_a << " and the min of your elements is "<<min_a<<'\n';
//   cout<< "Comparisons: "<< comparisons<<'\n';
    return 0;
}

