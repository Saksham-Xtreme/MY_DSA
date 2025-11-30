#include<iostream>
using namespace std;
int main(){
    int n,l;
    cout<<endl;
    cout<<"enter no. you want to reverse = ";
    cin>>n;
    cout<<endl;
    int rev=0;
    while(n>0){
        int last = n%10;
        rev = rev*10+last;
        n/=10;
    }
    cout<<"reverse digit = "<<rev<<endl;
    return 0;
}