#include<iostream>
using namespace std;
bool oddEven(int a){

    if(a%2==0){
        return true;
    } else{
        return false;
    }

}

int main(){
    cout<<oddEven(18)<<endl;
    return 0;
}