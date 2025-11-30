#include<iostream>
using namespace std;

int Sum(int n){
    if(n==0){
        return 0;
    }
    return n+Sum(n-1);
}

int main(){
    int n,k;
    cout<<"ent number to print its sum ";
    cin>>n;
    k=Sum(n);
    cout<< k<< endl;
    return 0;

}