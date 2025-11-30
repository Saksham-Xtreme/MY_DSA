#include<iostream>
using namespace std;
int BintoDec(int binNum){
    int n = binNum;
    int DecNum=0;
    int pow =1;

    while(n >0){
        int last=n%10;
        DecNum+=last*pow;
        pow=pow*2;
        n=n/10;
    }
    cout<<DecNum<<endl;
}

int main(){
    int a;
    cout<<"ent a binary no. = ";
    cin>>a;
    BintoDec(a);
    return 0;
}

