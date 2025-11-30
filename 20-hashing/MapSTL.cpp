
#include<iostream>
#include<vector>
#include<queue>
#include<stack>
#include<string>
#include<cmath>
#include<list>
#include<map>
#include<unordered_map>
#include<climits>
using namespace std;
// same as unordered but with little chnage that
// it is sorted on the basis of the key

int main(){
    map<string, int> m;
    m["India"]=150;
    m["China"]=180;
    m["USA"] = 80;
    m["USSR"]=100;
    m["Nepal"]=16;

    // search in map
    for(pair<string,int> country : m){
        cout<< country.first<<","<<country.second<<endl;
    }
    // m.erase("USA"); to erase
    if(m.count("USA")){
        cout<<"USA EXIST"<<endl;
    } else{
        cout<<"USA not EXIST"<<endl;
    }

    if(m.count("Kenya")){
        cout<<"kenya EXIST"<<endl;
    } else{
        cout<<"kenya not EXIST"<<endl;
    }

    m["Nepal"]=200; // it updates

    return 0;
}