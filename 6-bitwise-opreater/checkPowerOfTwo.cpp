#include<iostream>
using namespace std;

int main(){
    int a;
    cout<<" ent no.-> ";
    cin>>a;
    int bit=(a)&(a-1);
    if(bit==0){
        cout<<"power of 2 "<<endl;
    }
    else{
        cout<<"not a power of 2"<<endl;
    }
    return 0;
}