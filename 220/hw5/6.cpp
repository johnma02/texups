#include <iostream>
#include <string>
using namespace std;
void reverse(string str){
    cout << str[str.size()-1];
    if(str.size()<1)return;
    reverse(str.substr(0, str.size()-1)); 
}
int main(){
    string a = "eli";
    reverse(a);
    return 0;
}


