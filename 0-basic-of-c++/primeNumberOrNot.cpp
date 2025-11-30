#include<iostream>
using namespace std;
int main(){
    int n, a;
    cout<<"enter no. to check =";
    cin>>n;
    a=0;
    for(int i=1;i<n+1;i++){
        if(n%i==0){
            a+=1;
        }
    }
    if(a==2){
        cout<<"prime no"<<endl;
    }
    else{
        cout<<"not prime"<<endl;
    }

}