// string in c++

// OOPS : class, obj,member func & properties

#include<iostream>
#include<string>
using namespace std;

int main(){
    string str;
    getline(cin,str);
    cout<<str<<endl;
    for(int i=0;i<str.length();i++){
        cout<<str[i]<<" ";
    }
    cout<<"\n";

    for(char ch: str){
        cout<<ch<<",";
    }
    cout<<"\n";

    return 0;
}
