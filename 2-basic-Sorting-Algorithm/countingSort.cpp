#include<iostream>
#include<climits> // Required for INT_MAX and INT_MIN
using namespace std;

// This function prints the elements of an array.
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

// Counting Sort function.
// This is a linear time sorting algorithm that's efficient for data with a limited integer range.
// Time Complexity (TC): O(n + k), where 'n' is the number of elements and 'k' is the range of values.
// Space Complexity (SC): O(k), where 'k' is the range of values, due to the frequency array.
void countsort(int arr[],int n){
    // `freq` array to store the count of each element.
    int freq[1000000]={0}; 
    
    // Find min and max values to determine the range for counting.
    int minval= INT_MAX, maxval=INT_MIN;
    for(int i=0;i<n;i++){
        minval=min(minval,arr[i]);
        maxval=max(maxval,arr[i]);
    }

    // Count the frequency of each element in the input array.
    for(int i=0;i<n;i++){
        freq[arr[i]]++;
    }

    // Reconstruct the sorted array from the frequency counts.
    for(int i=minval,j=0;i<=maxval;i++){
        while(freq[i]>0){
            arr[j++]=i;
            freq[i]--;
        }
    }
    // Print the final sorted array.
    print(arr,n);
}

// Main function to run the Counting Sort.
int main(){
    int arr[8]={1,4,1,3,2,4,3,7};
    countsort(arr,8);
    return 0;
}