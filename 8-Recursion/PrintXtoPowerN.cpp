#include<iostream>
using namespace std;

long long Power(int n,int k){

   
    if(k==0){
        return 1;
    }

    long long halfPow=Power(n,k/2);

    long long halfPowSq = halfPow * halfPow;

    if(k%2 !=0){

        return n * halfPowSq;
    }

    return halfPowSq;

}



int main(){
    int n,k;

    cout<<"ent num. -> ";
    cin>>n;
    
    cout<<"ent power -> ";
    cin>>k;

    cout<<" total is -> "<<Power(n,k)<<endl;

    return 0;
    
}