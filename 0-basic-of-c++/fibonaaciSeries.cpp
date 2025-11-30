#include<iostream>
using namespace std;
int main(){
    int n,first = 0, sec = 1;
    cout<<"ent no. to find fiboaci series = ";
    cin>>n;
    cout<<"your nos are = ";
    for(int i =2;i<=n;i++){
        int third = first + sec;
        cout<<third<<" ";
        first = sec;
        sec = third;

    }
    return 0;
}