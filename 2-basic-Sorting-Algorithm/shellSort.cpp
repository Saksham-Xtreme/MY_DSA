#include <iostream>
using namespace std;

void shellSort(int arr[], int n) {

    // Start by selecting a large gap, then reduce it step-by-step
    for (int gap = n / 2; gap > 0; gap /= 2) {

        // Perform a modified insertion sort for elements spaced by the current gap
        for (int i = gap; i < n; i++) {

            // Store the current element to be positioned
            int temp = arr[i];

            // j will track the position while shifting elements
            int j = i;

            // Shift earlier elements forward if they are greater than temp
            // This ensures elements spaced by 'gap' are sorted
            while (j >= gap && arr[j - gap] > temp) {
                arr[j] = arr[j - gap];  // Move the larger element forward
                j -= gap;               // Move to previous gap-position
            }

            // Place the stored element into its correct position found above
            arr[j] = temp;
        }
    }
}

int main() {
    // Example input array
    int arr[] = {12, 34, 54, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    // Call Shell Sort
    shellSort(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
