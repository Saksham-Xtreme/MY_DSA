#include<iostream>
#include<stack>
#include<vector>
using namespace std;

bool Duplicate(string str){
    stack<char> s;
    for(int i=0;i<str.size();i++){
        char ch=str[i];

        if(ch != ')'){
            s.push(ch);
        } else{
            if(s.top()=='('){
                return true;
            } 

            while(s.top()!= '('){
                s.pop();
            }
            s.pop();
        }
    }
    
    return false;

}

int main(){
    string str1="((a+b))"; // invalid : true ->1
    string str2="((a+b)+(c+d))";//valid : false-> 0
    cout<< Duplicate(str1)<<endl; // 1
    cout<< Duplicate(str2)<<endl; // 0
    return 0;
}