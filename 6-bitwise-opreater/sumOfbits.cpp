#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int count =0;

    while(n>0){
        int last= n& 1;
        count+=last;
        n=n>>1;
    }
    
    cout<<count<<endl;
    return 0;
}