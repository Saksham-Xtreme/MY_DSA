#include<iostream>
#include<vector>
#include<algorithm> // For sort
using namespace std;

// Function to compare pairs based on the second value (end time)
bool compare(pair<int, int> p1, pair<int, int> p2) {
    return p1.second < p2.second; // Ascending order based on end time
}

// Function to find the maximum number of non-overlapping activities
int maxActSel(vector<pair<int, int>> &act) {
    // Sort activities based on their end time
    sort(act.begin(), act.end(), compare);

    int count = 1; // Select the first activity
    int currEndTime = act[0].second;

    cout << "Selecting activity A0" << endl;

    for (int i = 1; i < act.size(); i++) {
        if (act[i].first >= currEndTime) { // Non-overlapping condition
            cout << "Selecting activity A" << i << endl;
            count++;
            currEndTime = act[i].second;
        }
    }

    return count;
}

int main() {
    vector<int> start = {0, 1, 2};
    vector<int> end = {9, 2, 4};

    // Create a vector of pairs to store activities (start time, end time)
    vector<pair<int, int>> act;
    for (int i = 0; i < start.size(); i++) {
        act.push_back(make_pair(start[i], end[i]));
    }

    cout << "Activities before sorting:" << endl;
    for (int i = 0; i < act.size(); i++) {
        cout << act[i].first << "," << act[i].second << endl;
    }

    // Find the maximum number of non-overlapping activities
    int maxActivities = maxActSel(act);

    cout << "Maximum number of non-overlapping activities: " << maxActivities << endl;

    cout << "Activities after sorting:" << endl;
    for (int i = 0; i < act.size(); i++) {
        cout << act[i].first << "," << act[i].second << endl;
    }

    return 0;
}