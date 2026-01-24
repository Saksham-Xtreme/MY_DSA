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

int  nthCatlanRec(int n){
    if(n == 0 || n == 1){
        return 1;
    }

    int ans=0;
    for(int i=0;i<n;i++){
        ans+= nthCatlanRec(i) * nthCatlanRec(n-i-1);
    }

    return ans;
}

int  nthCatlanMemo(int n, vector<int> &dp){
    if(n == 0 || n == 1){
        return 1;
    }

    if(dp[n] != -1){
        return dp[n];
    }


    int ans=0;
    for(int i=0;i<n;i++){
        ans+= nthCatlanMemo(i, dp) * nthCatlanMemo(n-i-1, dp);
    }

    return dp[n] = ans;
}

int  nthCatlanTab(int n ){
    
    vector<int> dp(n+1, 0);

    dp[0] =1;
    dp[1] = 1;



    int ans=0;
    for(int i=2;i<=n;i++){
        for(int j=0; j<i; j++){
            dp[i]+= nthCatlanTab(j) * nthCatlanTab(i-j-1);
        }
        
    }

    return dp[n];
}



int main(){

    int n = 5;

    vector<int> dp(n+1, -1);
    cout<< " Using Rec " << nthCatlanRec(n) << endl;

    cout<< " Using memo " <<  nthCatlanMemo(n, dp) << endl;

    cout<< " Using Tab " <<  nthCatlanTab(n) << endl;
    return 0;

}