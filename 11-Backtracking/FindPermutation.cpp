#include<iostream>
#include<vector>
#include<string>
using namespace std;

void permutation(string str,string ans){
   
    int n= str.size();
    if(n==0){
        cout<< ans<<endl;
        return;
        
    }
    for(int i=0;i<str.size();i++){
        char ch=str[i];
        string nextstr= str.substr(0,i) + str.substr(i+1,n-i-1);
        permutation( nextstr ,ans+str[i]);// back track

    }
}

int main(){

    string str;
    cout<<" ent string to find subset => ";
    cin>>str;
    string ans="";
    permutation(str,ans);

    return 0;
}