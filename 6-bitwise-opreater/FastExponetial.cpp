#include<iostream>
using namespace std;

int main(){
    int x,n;
    cout<<"ent no. ";
    cin>>x;
    cout<<" ent power ";
    cin>>n;

    int ans=1;
    while(n>0){
        int last= n & 1;
        if(last){
            ans=ans*x;
        }
        x=x*x;
        n= n>>1;
    }

    cout<<ans<<endl;
    
}