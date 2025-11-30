#include<iostream>
using namespace std;

int main(){
    int n,i,val;
    cout<<"ent no.-> ";
    cin>>n;
    cout<<"ent postn of bit u want to change -> ";
    cin>>i;
    cout<<" ent val to change it should be 0 or 1 ";
    cin>>val;
    cout<<endl;
    int bit=~(1 << i);
    n=n & bit;// clear
    n=n|(val<<i);//update on basis 0 and 1
    if(val==0){
        cout<<n<<endl;
    }
    else{
        cout<<(n | (val<<i))<<endl;

    }




    return 0;



    
}