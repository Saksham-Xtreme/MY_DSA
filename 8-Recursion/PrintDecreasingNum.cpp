/*

infinte recursion cause stack overflow
we should always write base case

*/
#include<iostream>
using namespace std;

void print(int n){
    if(n==0){
        return;
    }
    cout<< n <<" ";
    print(n-1);
    // cout<< n <<" ";
}

int main(){
    int n;
    cout<<"ent number to print its reverse ";
    cin>>n;
    print(n);
    return 0;
}
