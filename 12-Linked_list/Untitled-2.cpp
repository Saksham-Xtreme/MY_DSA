#include<iostream>
#include<vector>
#include<algorithm> // For sort
using namespace std;

// Function to compare pairs based on the second value
bool compare(pair<int, int> p1, pair<int, int> p2) {
    return p1.second < p2.second;
}

// Function to find the maximum chain length
int maxChainLen(vector<pair<int, int>> pairs) {
    int n = pairs.size();

    // Sort pairs based on their second value
    sort(pairs.begin(), pairs.end(), compare);

    int ans = 1; // At least one pair can always be selected
    int currEnd = pairs[0].second; // End value of the first pair

    for (int i = 1; i < n; i++) { // Start from the second pair
        if (pairs[i].first > currEnd) { // Non-overlapping condition
            ans++;
            currEnd = pairs[i].second; // Update the current end value
        }
    }

    cout << "Max Chain Length -> " << ans << endl;
    return ans;
}

int main() {
    int n = 5;
    vector<pair<int, int>> pairs(n, make_pair(0, 0));
    pairs[0] = make_pair(5, 24);
    pairs[1] = make_pair(39, 60);
    pairs[2] = make_pair(5, 28);
    pairs[3] = make_pair(27, 40);
    pairs[4] = make_pair(50, 90);

    maxChainLen(pairs);

    return 0;
}