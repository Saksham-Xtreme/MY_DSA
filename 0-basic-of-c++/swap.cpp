#include<iostream>
using namespace std;
int main(){
    int a, b;
    cout<<"enter first no-> ";
    cin>>a;
    cout<<"enter second no-> ";
    cin>>b;
    cout<<"before swapping: "<<endl;
    cout<<"a= "<<a<<endl;
    cout<<"b= "<<b<<endl;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"after swapping: "<<endl;
    cout<<"a= "<<a<<endl;
    cout<<"b= "<<b<<endl;
    return 0;
    // This code swaps two numbers without using a third variable.
    // It uses arithmetic operations to achieve the swap.
    // The first step adds the two numbers and stores the result in 'a'.

}