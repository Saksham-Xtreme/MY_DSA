#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;



int helper(vector<int> nums, vector<int> arr){


    if( nums.size() == 0 || arr.size() == 0){
        return 0;
    }


    int n= nums.size();
    int m = arr.size();
    int ans=0;
    vector<vector<int>> dp(n+1, vector<int>(m+1, 0));

    for(int i=1; i<=n;i++){
        for(int j=1; j<=m; j++){

            if(nums[i-1] == arr[j-1]){
                dp[i][j]= 1+ dp[i-1][j-1];
            } else{
                dp[i][j] = max(dp[i][j-1], dp[i-1][j]);
            }

            // ans = max(ans, dp[i][j]);
        }

    }

    // return ans;
    return dp[n][m];
}


int lengthOfLIS(vector<int>& nums) {

    unordered_set<int> s(nums.begin(), nums.end());

    vector<int> arr(s.begin(), s.end());

    sort(arr.begin(), arr.end());

    int ans = helper(nums, arr);

    return ans;
}



int main(){
    
    vector<int> nums = {10,9,2,5,3,7,101,18};


    cout<< lengthOfLIS(nums) << endl;
    return 0;
}

