
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

int mcmRec(vector<int>& arr, int i, int j) {

    if (i == j) {
        return 0;
    }

    int ans = INT_MAX;

    for (int k = i; k < j; k++) {
        int cost1 = mcmRec(arr, i, k);
        int cost2 = mcmRec(arr, k + 1, j);

        int cost3 = arr[i - 1] * arr[k] * arr[j];

        int totalCost = cost1 + cost2 + cost3;
        ans = min(ans, totalCost);
    }

    return ans;
}


int mcmMemo(vector<int>& arr, int i, int j, vector<vector<int>> &dp) {

    if (i == j) {
        return 0;
    }

    int ans = INT_MAX;

    if(dp[i][j] != -1){
        return dp[i][j];
    }


    for (int k = i; k < j; k++) {
        int cost1 = mcmRec(arr, i, k);
        int cost2 = mcmRec(arr, k + 1, j);

        int cost3 = arr[i - 1] * arr[k] * arr[j];

        int totalCost = cost1 + cost2 + cost3;
        ans = min(ans, totalCost);
    }

    return dp[i][j] = ans;
}


int mcmTab(vector<int>& arr) {
    int n = arr.size();

    vector<vector<int>> dp(n, vector<int>(n, 0));

    // length = 2 means single matrix, cost = 0 (already initialized)

    for (int len = 2; len < n; len++) {
        for (int i = 1; i <= n - len; i++) {
            int j = i + len - 1;
            dp[i][j] = INT_MAX;

            for (int k = i; k < j; k++) {
                int cost1 = dp[i][k];
                int cost2 = dp[k + 1][j];
                int cost3 = arr[i - 1] * arr[k] * arr[j];

                int currCost = cost1 + cost2 + cost3;
                dp[i][j] = min(dp[i][j], currCost);
            }
        }
    }

    return dp[1][n - 1];
}



int main(){
    vector<int> arr = {1, 2, 3, 4, 5}; 
    int n = arr.size(); 
    vector<vector<int>> dp(n, vector<int>(n, -1));
    cout << mcmRec(arr, 1, n-1) << endl;

    cout << mcmMemo(arr, 1, n-1, dp) << endl;

    cout<< mcmTab(arr) << endl;

    return 0;
}


