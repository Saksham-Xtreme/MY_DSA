#include<iostream>
#include<string>
using namespace std;

void RemoveDuplicate(string str,string ans, int i,int map[26]){

    if(i==str.size()){
        cout<<"ans-> "<<ans<<endl;
        return;
    }

    int mapidx=(int)(str[i]-'a');

    if(map[mapidx]){
        RemoveDuplicate(str,ans,i+1,map);
    }
    else{
        map[mapidx]=true;
        RemoveDuplicate(str,ans+str[i],i+1,map);
    }
}

int main(){
    string str = "ssaakksshhaamm";
    string ans = "";
    int map[26]={false};

    RemoveDuplicate(str,ans,0,map);
    return 0;

}