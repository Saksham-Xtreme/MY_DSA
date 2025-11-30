#include<iostream>
using namespace std;

// This function prints the elements of an array.
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

// Insertion Sort function.
// This algorithm builds the final sorted array one item at a time. 
// It's efficient for small
// data sets and nearly sorted arrays.
// Time Complexity (TC):
// Best Case: O(n) (when the array is already sorted)
// Worst/Average Case: O(n^2)
// Space Complexity (SC): O(1) (in-place sorting)


void insertsort(int arr[], int n){
        // Start from the second element (i=1) and iterate to the end.
    for(int i=1;i<n;i++){
        int curr = arr[i]; // The current element to be inserted in the sorted part.
        int prev= i-1;    // The index of the last element in the sorted part.
        
        // Move elements of the sorted part that are greater than `curr` one position ahead
        // of their current position to make space for `curr`.
        while(prev>=0 && arr[prev]>curr){
            swap(arr[prev],arr[prev+1]);
            prev--;
        }
        // Place the `curr` element at its correct position in the sorted part.
        arr[prev+1]=curr;

    }
    // Print the final sorted array.
    print(arr,n);
}

// Main function to run the Insertion Sort.
int main(){
    int arr[5]={5,4,1,3,2};
    insertsort(arr,5);
    return 0;
}