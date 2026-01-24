#include<iostream>
#include<vector>
#include<unordered_map>
#include<unordered_set>
#include<climits>
using namespace std;


int Cutting( vector<int> price, vector<int> length, int rodLen ){
    int n = length.size();
    vector<vector<unsigned int>> dp(n+1, vector<int>(rodLen+1, 0));

    for(int i=1; i<n+1; i++){
        for(int j=1;j< rodLen+1; j++){
            if(length[i-1] <= j){
                dp[i][j] = max(price(i-1) + dp[i][j-length[i-1]], dp[i-1][j]);
            } else{
                dp[i][j] = dp[i-1][j];
            }
        }
    }

    return dp[n][rodLen];
}

int main(){
    vector<int> price = {1, 5, 8, 9, 10, 17, 17, 20};
    vector<int> length = {1, 2, 3,4,5,6,7,8};

    int rodLen = 8;


    return 0;
}