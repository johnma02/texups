#include <bits/stdc++.h>
template <typename Comparable>
class MinStack {
private:
    stack<Comparable> s;
    Comparable curr_min = -1;
    bool empty = true;
    void push_item(Comparable item){
        if(s.empty()){
            s.push(item);
            curr_min = item;
            empty = false;
            return;
        }
        if(item >= curr_min){
            s.push(item);
        }
        else{
            s.push(item*2 - curr_min);
            curr_min = item;
        }
    }
    void pop_back(){
        if(s.top() < curr_min){
            curr_min = curr_min*2 - s.top();
        }
        s.pop();
        if(s.size() == 0) empty = true;
    }
public:
    Comparable findMin(){
        if(this -> empty){
            cout << "The stack is empty\n";
            return -1;
        }
        return this -> curr_min;
    };
    void push(Comparable item){
        push_item(item);
    }
    void pop(){
        if(s.size() > 0) pop_back();
    }
    int size(){
        return s.size();
    }
};
