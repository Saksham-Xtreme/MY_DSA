#include<iostream>

using namespace std;

int factorial(int n){
    if(n==0){
        return 1;
    }
    return n * factorial(n-1);
}

int main(){
    int n,k;
    cout<<"ent no. to find factorial = ";
    cin>>n;
    k=factorial(n);
    cout<<k<<endl;
    return 0;

}


