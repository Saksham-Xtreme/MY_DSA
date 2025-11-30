#include<iostream>
using namespace std;

int Tp(int n){
    if(n==0 || n==1){
        return 1;
    }
    // vertical
    int ansV = Tp(n-1);

    // horizontal;
    int ansH= Tp(n-2);

    return ansV+ansH;
}

int main(){
    int n;
    cout<<" ent width of floor to fit 2x1 tiles -> ";
    cin>>n;
    cout<<"no. of ways to place tiles on 2x"<<n<<" floor is -> "<<Tp(n)<<endl;

    return 0;
}