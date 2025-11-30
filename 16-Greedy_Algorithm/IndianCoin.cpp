#include<iostream>
#include<vector>
#include<queue>
#include<stack>
#include<string>
#include<cmath>
#include<list>
using namespace std;

// Function to calculate the minimum number of coins required for a given value
int getMinChange(vector<int> coin, int V){
    int ans = 0; // To store the total number of coins
    int n = coin.size(); // Number of available coin denominations

    // Traverse the coin denominations in descending order
    for(int i = n - 1; i >= 0 && V > 0; i--){
        if(V >= coin[i]){ // If the current coin can be used
            ans += V / coin[i]; // Add the number of coins of this denomination
            V = V % coin[i]; // Update the remaining value
        }
    }

    // Output the result
    cout << "Minimum coins for change: " << ans << endl;
    return ans;
}

int main(){
    // List of available coin denominations (sorted in ascending order)
    vector<int> coin = {1, 2, 5, 10, 20, 50, 100, 500, 2000};
    int V = 590; // Value for which change is required

    // Call the function to calculate the minimum number of coins
    getMinChange(coin, V);

    return 0;
}