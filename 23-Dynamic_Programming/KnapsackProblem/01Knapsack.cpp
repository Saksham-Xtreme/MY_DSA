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


// 0-1 knapSack
int knapSacRec(vector<int> val, vector<int> wt, int W, int n){ // O(2^n);
    if(n == 0 || W == 0){
        return 0;
    }

    int itemWt= wt[n-1];
    int itemVal= val[n-1];

    if(itemWt <= W ){
        // include
        int ans1 = knapSacRec(val, wt, W-itemWt, n-1) + itemVal;

        // exclude

        int ans2 = knapSacRec(val, wt, W, n-1);

        return max(ans1, ans2);


    } else{

        return knapSacRec(val, wt, W, n-1);

    }
}

//Using Memoistation
int knapSacMem(vector<int> val, vector<int> wt, int W, int n, vector<vector<int>> &dp){  // O(n*w)
    if(n == 0 || W == 0){
        return 0;
    }

    if(dp[n][W] != -1){
        return dp[n][W];
    }


    int itemWt= wt[n-1];
    int itemVal= val[n-1];

    if(itemWt <= W ){
        // include
        int ans1 = knapSacMem(val, wt, W-itemWt, n-1, dp) + itemVal;

        // exclude

        int ans2 = knapSacMem(val, wt, W, n-1, dp);


        dp[n][W]= max(ans1, ans2);


    } else{
        dp[n][W]=knapSacMem(val, wt, W, n-1, dp);
    }

    return dp[n][W];
}

// using tabulation 
int knapSacTab(vector<int> val, vector<int> wt, int W, int n){
    vector<vector<int>> dp(n+1, vector<int>(W+1, 0));

    for(int i=1;i<n+1;i++){
        for(int j=1; j<W+1; j++){
            int itemWt= wt[i-1];
            int itemVal= val[i-1];

            if(itemWt <= j){
                dp[i][j] = max(itemVal + dp[i-1][j-itemWt], dp[i-1][j]);
            } else{
                dp[i][j] = dp[i-1][j];
            }
        }
    }

    return dp[n][W];
}


int main(){

    vector<int> val = {15, 14, 10, 45, 30};
    vector<int> wt = {2,5,1,3,4};

    int W = 7;
    int n = 5;

    vector<vector<int>> dp(n+1, vector<int> (W+1, -1));

    cout << "max Profit in 0-1 knapsack   Using Recurrsion =  "<< knapSacRec(val, wt, W, n)<<endl;
    cout << "max Profit in 0-1 knapsack   Using Memoistation =  "<< knapSacMem(val, wt, W, n, dp)<<endl;
    cout << "max Profit in 0-1 knapsack   Using Tabulation =  "<< knapSacTab(val, wt, W, n)<<endl;


    return 0;
}