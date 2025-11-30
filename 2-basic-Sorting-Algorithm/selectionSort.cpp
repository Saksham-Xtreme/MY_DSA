#include <iostream>
using namespace std;

// Function to print the array elements
void print(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << ","; // print each element followed by a comma
    }
    cout << endl;
}

// Function to perform Selection Sort on the array
void selectionSort(int arr[], int n) {
    // Outer loop — moves the boundary of the unsorted subarray
    for (int i = 0; i < n - 1; i++) {
        int minIdx = i; // assume the current index is the minimum

        // Inner loop — find the smallest element in the remaining unsorted array
        for (int j = i + 1; j < n; j++) {
            // If the current element is smaller than the element at minIdx
            // For descending order, replace < with >
            if (arr[j] < arr[minIdx]) {
                minIdx = j; // update the index of the minimum element
            }
        }

        // Swap the found minimum element with the first element of the unsorted part
        swap(arr[i], arr[minIdx]);
    }

    // Print the sorted array
    print(arr, n);
}

int main() {
    // Initialize the array
    int arr[5] = {5, 3, 4, 2, 1};

    // Call the selection sort function
    selectionSort(arr, 5);

    return 0;
}
