#include<iostream>
#include<vector>
#include<queue>
#include<stack>
#include<string>
#include<cmath>
#include<list>
#include<map>
#include<climits>
using namespace std;

int main(){
    map<int, string> m;
    m[101]="rahul";
    m[229]="neha";
    m[876]="rahul";

    cout<< m[101]<<endl;
    cout<< m[229]<<endl;
    cout<< m[876]<<endl;

    for(auto it : m){
        cout<< it.first<<"  "<<it.second<<endl;;
    }

    return 0;
 
}