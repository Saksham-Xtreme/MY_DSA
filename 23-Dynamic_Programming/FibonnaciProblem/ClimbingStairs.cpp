#include<iostream>
#include<vector>
#include<queue>
#include<stack>
#include<string>
#include<cmath>
#include<list>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
#include<climits>
using namespace std;


int CountWaysRec(int n){
    if(n==0 || n==1){
        return 1;
    }

    return CountWaysRec(n-1) + CountWaysRec(n-2);
}

int CountWaysMemo(int n, vector<int> &f){
    if(n==0 || n==1){
        return 1;
    }
    
    if(f[n] != -1){
        return f[n];
    }

    f[n] = CountWaysMemo(n-1, f) + CountWaysMemo(n-2, f);
    return f[n];
}    

// with tabulation;
int CountWaysTab(int n){
    vector<int> f(n+1, 0);

    f[0]=1;
    f[1]=1;

    for(int i=2;i<n+1;i++){
        f[i]=f[i-1]+f[i-2];
    }

    return f[n];
}


int main(){
    int n=4;
    vector<int> f(n+1, -1);
    cout<< " With Recurssion =  ";
    cout<< CountWaysRec(n) << endl;

    cout<< " With Memoistation =  ";
    cout<< CountWaysMemo(n, f) << endl;

    cout<< " With tabulation =  ";
    cout<< CountWaysTab(n) << endl;
    return 0;
}