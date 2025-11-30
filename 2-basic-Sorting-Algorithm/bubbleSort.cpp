#include<iostream>
using namespace std;

// Prints the elements of an array.
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<",";
    }
    cout<<endl;
}

// Implements Bubble Sort.
// It sorts an array by repeatedly swapping adjacent elements that are in the wrong order.
// The `isSwap` optimization stops the sort early if the array is already sorted.
void bubbleSort(int arr[],int n){
    // Outer loop for passes through the array.
    for(int i=0;i<n-1;i++){
        bool isSwap=false; // Flag to check if any swaps happened.
        
        // Inner loop to compare and swap adjacent elements.
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                isSwap=true;
            }
        }
        // If no swaps occurred, the array is sorted. Exit early.
        if(!isSwap){
            return;
        }
    }
    // Print the sorted array after the process is complete.
    print(arr,n);
}

// Main function for program execution.
int main(){
    int arr[5]={5,3,4,2,1};
    // Calls bubble sort, which sorts and then prints the array.
    bubbleSort(arr,5);
    int num=4;
    // Condition `!(num==5)` evaluates to true.
    if(!(num==5)){
        cout<<"yes"; // "yes" is printed to the console.
    }
    else{
        cout<<8;
    }
    return 0;
}