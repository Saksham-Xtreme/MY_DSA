// member funcs 

#include<iostream>
#include<string>
using namespace std;

int main(){
    string str;
    getline(cin,str);
    cout<<str.length()<<endl;// length
    cout<<str.at(3)<<endl;// at index
    cout<<str.substr(1,5)<<endl;// for substring
    cout<<str.find("DSA")<<endl;// give the index word at first occurance
    

    

    return 0;
}
