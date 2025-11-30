// Notes on the Code
// This program solves the Sliding Window Maximum problem using a priority queue (max-heap). The goal is to find the maximum value within a sliding window of size K as it moves across an array.
//
// Priority Queue (std::priority_queue): The priority queue stores pairs of (value, index) from the input array. It's configured as a max-heap, so the element with the highest value is always at the top.
// Initialization: The algorithm first populates the priority queue with the first K elements of the array. The maximum of this initial window is then printed.
// Sliding Window Logic: The program then iterates through the rest of the array, from index K to the end. In each step, it performs two key operations:
// 1. Remove Out-of-Window Elements: A while loop checks if the top element's index (pq.top().second) is no longer within the current window (i.e., its index is less than or equal to i-K). If it's outside the window, it's removed from the priority queue.
// 2. Add New Element & Find Max: The new element at the current index i is added to the priority queue. The maximum of the new window is then simply the top element of the priority queue, which is printed.
//
// Time Complexity (TC):
// O(N log K): For each of the N elements in the array, we perform push and pop operations on the priority queue. Since the priority queue stores at most K elements, each operation takes O(log K). The overall complexity is O(N log K).
//
// Space Complexity (SC):
// O(K): In the worst case, the priority queue will store up to K elements, representing the elements in the current window.
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

void slidingWindowMax(vector<int> arr, int K){
    priority_queue<pair<int,int>> pq;

    for(int i=0;i<K;i++){
        pq.push(make_pair(arr[i],i));
    }

    cout<<"output : "<<pq.top().first<<" ";
    for(int i=K;i<arr.size();i++){
        while(!pq.empty() && pq.top().second <= (i-K)){
            pq.pop();
        }

        pq.push(make_pair(arr[i], i));
        cout<<pq.top().first<<" ";
    }

    cout<<endl;
}

int main(){
    vector<int> arr={1,3,-1,-3,5,3,6,7};
    int K=3;

    slidingWindowMax(arr,K);
    return 0;
}