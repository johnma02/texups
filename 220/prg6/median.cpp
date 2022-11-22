#include <bits/stdc++.h>
#include <queue>

using namespace std;

priority_queue<int> low;
priority_queue<int, vector<int>, greater<int>> high; 
//vector<int> test;
int median = 0;

void insert(int x){
    //test.push_back(x);
    if(high.size() > low.size()){
        if(x > median){
            low.push(high.top());
            high.pop();
            high.push(x);
        }
        else low.push(x);
        median = low.top();
    }
    else if(high.size() < low.size()){
        if(x < median){
            high.push(low.top());
            low.pop();
            low.push(x);
        }
        else high.push(x);
        median = low.top();
    }
    else{
        if(x < median){
            low.push(x);
            median = low.top();
        }
        else{
            high.push(x);
            median = high.top();
        }
    }
    cout << "Running Median: "<< median << '\n';
}

int main(){
    int input = -1;
    while(input != 2){
        cout << "Choose your desired action:\n1: Insert an element\n2: Exit Program\n";
        //cout << "4: Test program by printing all inserted elements sorted\n";
        cin >> input;
        switch(input){
            case 1:
                cout << "Input your desired integer element:\n";
                int x; cin >> x; 
                insert(x);
                cout << "... done!\n";
                break;
            case 2:
                cout << "Exiting ... \n";
                return 0;
                /*
            case 4:
                sort(test.begin(), test.end());
                for(auto i : test) cout << i << " ";
                cout << '\n';
                cout << median << '\n';
                break;
                */
        }
    }
}
