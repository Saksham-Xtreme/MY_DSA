// find and print all subset

#include<iostream>
#include<vector>
#include<string>
using namespace std;
// tc=O(2^n) Sc=O(n)
// subset = 2^n

void printsub(string str,string subset){

    if(str.size()==0){
        cout<< subset<<"\n";
        return;
    }

    char ch=str[0];
    //yes
    printsub(str.substr(1,str.size()-1),subset+ch);
    
    // no
    printsub(str.substr(1,str.size()-1),subset);

}

int main(){

    string str;
    cout<<" ent string to find subset => ";
    cin>>str;
    string subset="";
    printsub(str,subset);
    return 0;
}