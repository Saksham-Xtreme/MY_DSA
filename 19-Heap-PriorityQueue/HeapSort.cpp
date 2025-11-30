/* Notes on the code:
// This program implements the Heap Sort algorithm to sort a vector of integers in ascending order.
// The algorithm consists of two main phases:
// 1. Building a Max Heap: The `heapSort` function first converts the input vector into a max heap.
//    A max heap is a complete binary tree where the value of each node is greater than or equal
//       to the values of its children.
//    This is done by calling the `heapify` function on all non-leaf nodes, starting from the last one and moving up to the root.
// 2. Sorting the Heap: After the heap is built, the largest element (which is always at the root, index 0) is swapped with the last element of the array.
//    The size of the heap is then reduced by one, and the heap property is restored for the remaining elements by calling `heapify` on the new root.
//    This process is repeated until all elements are sorted.
// The `heapify` function is a core utility that maintains the max-heap property.
//  It compares a parent node with its children and swaps them if the parent is smaller, then recursively calls itself on the affected subtree.
// This implementation uses a `vector` as an array-based representation of a binary tree.
//  The left child of a node at index `i` is at `2*i+1` and the right child is at `2*i+2`.
// The time complexity of Heap Sort is O(n log n) in all cases (best, average, and worst), 
// and its space complexity is O(1) as it sorts in-place.
*/
#include<iostream>
#include<vector>
#include<queue>
#include<stack>
#include<string>
#include<cmath>
#include<list>
#include<map>
#include<climits>
using namespace std;

void heapify(int i, vector<int> &arr, int n){
    int left=2*i+1;
    int right=2*i+2;
    int maxI=i;

    if(left < n && arr[left] > arr[maxI]){
        maxI=left;
    }

    if(right< n && arr[right] > arr[maxI]){
        maxI=right;
    }

    if(maxI != i){
        swap(arr[i], arr[maxI]);
        heapify(maxI, arr, n);
    }

}

void heapSort(vector<int> &arr){
    int n=arr.size();
    for(int i=n/2-1;i>=0;i--){
        heapify(i,arr,n);
    }

    for(int i=n-1;i>=0;i--){
        swap(arr[0], arr[i]);
        heapify(0, arr, i);
    }
}

int main(){
    vector<int> arr={1,4,2,5,3};
    heapSort(arr);
    for(int i=0;i<arr.size();i++){
        cout<< arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}