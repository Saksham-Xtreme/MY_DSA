#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    std::vector<int> arr(t);
    for (int i = 0; i < t; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < t; i++) {
        int k = arr[i];
        for (int j = 1; j <= k; j++) {
            cout << j << " ";
        }
        cout << "\n";
    }

    return 0;
}
