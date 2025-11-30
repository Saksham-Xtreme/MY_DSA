#include<iostream>
using namespace std;

int main(){
    int a,i;
    cout<<"ent no. ";
    cin>>a;
    cout<<"ent postion ";

    cin>>i;

    int mask=a<<i;

    if((a&mask)==0){
        cout<<0<<endl;
    }
    else{
        cout<<1<<endl;
    }
    
    return 0;

}