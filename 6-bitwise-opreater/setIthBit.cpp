#include<iostream>
using namespace std;

int main(){
    
    int a,i;
    cout<<"ent no. ";
    cin>>a;
    cout<<"ent postion ";
    cin>>i;
    int bit=1<<i;
    cout<<(a | bit)<<endl;
    return 0;

}