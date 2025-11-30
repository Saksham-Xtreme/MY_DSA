#include<iostream>
using namespace std;
int main(){
    int i=0, n=1;
    while(i<5){
        if(n%5==0){
            if(n%7==0){
                cout<<n<<endl;
                i++;
                
            }
        }
        n++;
        
    }
}