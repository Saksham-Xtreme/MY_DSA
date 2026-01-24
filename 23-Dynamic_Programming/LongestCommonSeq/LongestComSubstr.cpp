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
int lcStrTab(string str1,  string str2){
    int n = str1.size();
    int m = str2.size();
    int ans=0;
    vector<vector<int>> dp(n+1, vector<int>(m+1, 0));

    for(int i=1; i<=n;i++){
        for(int j=1; j<=m; j++){
            if(str1[i-1] == str2[j-1]){
                dp[i][j] = dp[i-1][j-1] +1;
            } else{
                dp[i][j] = 0;
            }

            ans= max(ans, dp[i][j]);
        }
    }


    return ans;



}





int main(){

    
    string str1 = "abcdge";
    string str2 = "abedg";

    int n= str1.size();
    int m= str2.size();


    vector<vector<int>> dp(n+1, vector<int>(m+1, -1));
    cout<< lcStrTab(str1, str2) << endl;
    return 0;

}