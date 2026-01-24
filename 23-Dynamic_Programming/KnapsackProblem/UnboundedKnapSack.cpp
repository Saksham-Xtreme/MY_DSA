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


// using tabulation 
int Unbounded(vector<int> val, vector<int> wt, int W, int n){
    vector<vector<int>> dp(n+1, vector<int>(W+1, 0));

    for(int i=1;i<n+1;i++){
        for(int j=1; j<W+1; j++){
            int itemWt= wt[i-1];
            int itemVal= val[i-1];

            if(itemWt <= j){
                dp[i][j] = max(itemVal + dp[i][j-itemWt], dp[i-1][j]);
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

    cout << "max Profit in 0-1 knapsack   Using Tabulation =  "<< Unbounded(val, wt, W, n)<<endl;

    return 0;
}