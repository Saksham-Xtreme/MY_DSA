#include<iostream>
using namespace std;

int palindrome(int a){
    int rev=0;
    while(a>0){
        int lst = a%10;
        rev=rev*10 + lst;
        a=a/10;
    }
    return rev;
}

int main(){
    int n;
    cout<<"ent no. = ";
    cin>>n;
    int s= palindrome(n);
    if(s==n){
        cout<<"number is palindrome"<<endl;
    } else{
        cout<<"number is not palindrome"<<endl;
    }
    return 0;
}