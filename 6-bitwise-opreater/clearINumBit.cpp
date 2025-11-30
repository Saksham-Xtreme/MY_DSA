#include<iostream>
using namespace std;

int main(){
    int n,i;
    cout<<"ent no.-> ";
    cin>>n;
    cout<<"ent num. of bit u want to clear -> ";
    cin>>i;
    cout<<endl;

    int bit= (~0) << i;
    cout<< (n & bit)<<endl;
    
    return 0;

}