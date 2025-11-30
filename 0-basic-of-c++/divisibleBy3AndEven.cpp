#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"ent no.=";
    cin>>num;
    if(num%2==0 && num%3==0){
        cout<<"even and divisible by 3"<<endl;
    }
    else if(num%2==0){
        cout<<"even only"<<endl;
    }
    else{
        cout<<"odd"<<endl;
    }
    num>10 ? cout<<"greater than 10"<<endl : cout <<"less than 10"<<endl;
}11