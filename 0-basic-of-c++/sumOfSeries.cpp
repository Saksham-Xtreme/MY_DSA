#include<iostream>
using namespace std;
int main(){
    int n;
    int sum;
    sum=0;
    cout<<endl;
    cout<<endl;
    cout<<"*****  series will be like 1-2+3-4...n  *****"<<endl;
    cout<<"how many no. series do you want print = ";
    cin>>n;
    cout<<endl;
    for(int i =1;i<=n;i++){
        if(i%2==0){
            sum +=i;
        }
        else{
            sum -=i;
        }
    }
    cout<<"final sum = "<<sum<<endl;
    cout<<endl;
    return 0;
}
