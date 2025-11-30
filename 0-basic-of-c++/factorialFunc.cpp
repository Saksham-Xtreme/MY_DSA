#include<iostream>
using namespace std;
int factorial(int a){
    int fact=1;
    for(int i=1;i<=a;i++){
        fact=fact*i;
    }
    return fact;
}

int main(){
    int b;
    cout<<" ent no. = ";
    cin>>b;
    int s=factorial(b);
    cout<<"factorial = "<<s<<endl;
    return 0;
}