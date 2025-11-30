// #include <iostream>
// using namespace std;

// int fibonacci(int n) {
//     if (n == 0) return 0;
//     else if (n == 1) return 1;


//     return fibonacci(n - 1) + fibonacci(n - 2);
// }



// int main() {
//     int n;
//     cout << "Enter position to print its fibonacci: ";
//     cin >> n;

//     int k = fibonacci(n);
//     cout << k << endl;

//     return 0;
// }



#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;

    return fibonacci(n - 1) + fibonacci(n - 2);
}

void printFiboSeries(int n) {
    for (int i = 0; i < n; i++) {
        cout << fibonacci(i) << " ";
    }
}

int main() {
    int n;
    cout << "Enter how many Fibonacci numbers to print: ";
    cin >> n;

    printFiboSeries(n);

    return 0;
}

