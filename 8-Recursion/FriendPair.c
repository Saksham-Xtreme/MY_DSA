#include<iostream>
#include<string>
using namespace std;

int FrndPair(int n){
    if(n==1 || n==2){
        return n;
    }

    return FrndPair(n-1)+(n-1)*FrndPair(n-2);

}

int main(){
    int k;
    cout<<"ent no. of frnds to pair= "<<endl;
    cin>>k;

    cout<< FrndPair(k); <<endl;

    return 0;

}