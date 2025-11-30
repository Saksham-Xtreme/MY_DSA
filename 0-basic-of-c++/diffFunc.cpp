#include<iostream>
using namespace std;
int diff(int a, int b){
    int diff = a - b;
    return diff;
}

int main(){
    int s = diff(4,2);
    cout<<"diff = "<< s <<endl;
    return 0;
}