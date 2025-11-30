#include<iostream>
using namespace std;

int main(){
    int a;
    cin>>a;
    if((a & 1)==0){
        cout<<"even\n"<<endl;
    }
    else{
        cout<<"odd\n"<<endl;
    }
    return 0;
}