#include<iostream>
using namespace std;

int sum(int n){
    int s=0;
    while(n>0){
        int l= n%10;
        s+=l;
        n=n/10;
    }
    return s;
}
int main(){
    int a;
    cout<<"ent no. = ";
    cin>>a;
    int d =sum(a);
    cout<<"sum of digits = "<<d<<endl;
    return 0;
}