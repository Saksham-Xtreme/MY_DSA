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

int lcsRec(string str1, string str2){   // O(2^(n+m));

    if(str1.size() == 0 || str2.size()== 0 ){
        return 0;
    }
    int n= str1.size();
    int m= str2.size();

    if(str1[n-1] == str2[m-1]){
        return 1 + lcsRec(str1.substr(0, n-1), str2.substr(0, m-1));
    } else{
        int ans1 = lcsRec(str1.substr(0, n-1), str2);
        int ans2 = lcsRec(str1, str2.substr(0, m-1));

        return max(ans1, ans2);
    }
}

// using Memoization
int lcsMemo( string str1,  string str2 ,  vector<vector<int>> &dp){
    if(str1.size() == 0 || str2.size()==0){
        return 0;
    }
    int n= str1.size();
    int m= str2.size();

    if(dp[n][m] != -1){
        return dp[n][m];
    }

    if(str1[n-1] == str2[m-1]){
        dp[n][m] = 1+ lcsMemo(str1.substr(0, n-1), str2.substr(0, m-1), dp);

    } else{
        int ans1= lcsMemo(str1.substr(0, n-1), str2, dp);

        int ans2 = lcsMemo(str1, str2.substr(0, m-1), dp);

        dp[n][m] = max(ans1, ans2);
    }


    return dp[n][m];

}

// using tabulation
int LcsTab(string str1,  string str2){
    int n = str1.size();
    int m = str2.size();

    vector<vector<int>> dp(n+1, vector<int>(m+1, 0));

    for(int i=1; i<=n;i++){
        for(int j=1; j<=m; j++){
            if(str1[i-1] == str2[j-1]){
                dp[i][j] = dp[i-1][j-1] +1;
            } else{
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
    }


    return dp[n][m];



}





int main(){

    
    string str1 = "abcdge";
    string str2 = "abedg";

    int n= str1.size();
    int m= str2.size();


    vector<vector<int>> dp(n+1, vector<int>(m+1, -1));
    cout<< lcsRec( str1, str2) <<endl;

    cout<< lcsMemo(str1, str2, dp) << endl;

    cout<< LcsTab(str1, str2) << endl;
    return 0;

}