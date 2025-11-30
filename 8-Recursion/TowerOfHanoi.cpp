#include<iostream>
#include<string>
using namespace std;

void TowerOfHanoi(int n, string src, string helper, string dest) {
    // Base case
    if (n == 1) {
        cout << "Move disk 1 from " << src << " to " << dest << endl;
        return;
    }

    // Step 1: Move n-1 disks from src → helper
    TowerOfHanoi(n - 1, src, dest, helper);

    // Step 2: Move nth (largest) disk from src → dest
    cout << "Move disk " << n << " from " << src << " to " << dest << endl;

    // Step 3: Move n-1 disks from helper → dest
    TowerOfHanoi(n - 1, helper, src, dest);
}


int main() {
    int n;
    cout << "Enter number of disks: ";
    cin >> n;

    TowerOfHanoi(n, "A", "B", "C");

    return 0;
}
