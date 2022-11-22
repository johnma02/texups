#include <bits/stdc++.h>
#include "minstack.h"

int main(){
    ios_base::sync_with_stdio(false);  
    MinStack<int> test;
    /*
    cout << test.findMin() << '\n';
    test.push(3);
    cout << test.findMin() << '\n';
    test.push(1);
    cout << test.findMin() << '\n';
    test.push(-4);
    cout << test.findMin() << '\n';
    test.pop();
    cout << test.findMin() << '\n';
    test.pop();
    cout << test.findMin() << '\n';
    test.push(509);
    cout << test.findMin() << '\n';
    test.push(5000);
    cout << test.findMin() << '\n';
    test.push(-14444);
    cout << test.findMin() << '\n';
    while(test.size() > 0){
        test.pop();
        cout << test.findMin() << '\n';
    }
    test.pop();
    */
    int usr = -1;
    while(usr != 4){
        cout << "Choose an option:\n1: Insert Element\n2: Pop Element\n3: Output Min\n4: Quit\n";
        cin >> usr;
        switch(usr){
            case 1: 
                cout << "Input your element\n";
                int elem; cin >> elem;
                test.push(elem);
                cout << "inserting element ... done ...\n";
                break;
            case 2:
                test.pop();
                cout << "popping element ... done ...\n";
                break;
            case 3:
                cout << "current min is: "<<test.findMin() << '\n';
                break;
            case 4:
                cout << "exiting\n";
                return 0;
            default:
                break;
        }
    }
    return 0;
}
