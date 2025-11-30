#include<iostream>
#include<string>
using namespace std;

void binstring(int n, string ans){
    if(n==0){
        cout<<ans<<endl;
        return;
    }

    if(ans[ans.size()-1] !='1'){
        binstring(n-1,ans+'0');
        binstring(n-1,ans+'1');
    }
    else{
        binstring(n-1,ans+'0'); 
    }

}

int main(){
    int n;
    cout<<" ent no. to print binray string without consecutive 1's -> ";
    cin>>n;
    string ans="";
    binstring(n,ans);
    return 0;
}
