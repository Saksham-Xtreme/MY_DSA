#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"ent no. to find factorial = ";
    cin>>n;
    int fact =1;
    if(n < 0){
        
        cout<<"Cannot find factorial "<<endl;
        return 0;

    }
    for(int i=1;i<=n;i++){
        fact = fact*i;
    }
    cout<<"factorial is = "<<fact<<endl;
    return 0;
}