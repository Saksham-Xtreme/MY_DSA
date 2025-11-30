#include <iostream>

// No need for <vector> in this code
// #include<vector> 

using namespace std;

// Calculates n raised to the power of k (n^k)
long long Power(int n, int k) {
    
    // Base Case: Anything to the power of 0 is 1.
    if (k == 0) {
        return 1;
    }

    // Recursive Step: Calculate power for k/2
    long long halfPow = Power(n, k / 2);
    long long halfPowSq = halfPow * halfPow;

    // If k is odd, the result is n * (n^(k/2))^2
    // For example: 3^5 = 3 * (3^2)^2
    if (k % 2 != 0) {
        return n * halfPowSq;
    }

    // If k is even, the result is (n^(k/2))^2
    // For example: 3^4 = (3^2)^2
    return halfPowSq;
}

int main() {
    int n, k;
    cout << "Enter number -> ";
    cin >> n;
    cout << "Enter power -> ";
    cin >> k;

    // Using long long for the result to prevent overflow with large numbers
    cout << "Total is -> " << Power(n, k) << endl;

    return 0;
}