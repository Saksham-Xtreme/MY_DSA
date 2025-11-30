#include<iostream>
#include<stack>
#include<string>
using namespace std;

string rev(string str){
    string ans;
    stack<char> a;

    for(int i=0;i<str.size();i++){
        a.push(str[i]);
    }
    while(!a.empty()){
        char t= a.top();
        ans+=t;
        a.pop();
    }

    return ans;
}


int main(){
    
    stack<int> s;
    s.push(3);
    s.push(2);
    s.push(1);

    cout<< rev("hello")<<"\n";

    return 0;
}