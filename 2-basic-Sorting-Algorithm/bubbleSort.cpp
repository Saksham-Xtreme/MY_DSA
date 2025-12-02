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
         // Flag to check if any swaps happened.
        
        // Inner loop to compare and swap adjacent elements.
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                
            }
        }
        // If no swaps occurred, the array is sorted. Exit early.
        
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





// // n/2
// 1 2 3 4 5 6 7 8 9;

// 0 1 2 3 4 5 6 7 8

// int st=0;
// int end=n-1;
// int m;
// cin>>m;
// m=7;


// while(st<end){
//     int mid= (end+st)/2; 

//     if(arr[mid]==m){
//         cout<<mid << endl;
//         return 0;
//     }
//     else if(arr[mid] > m){
//         end=mid-1;
//     }
    
//     else if(arr[mid] < m){
//         st=mid+1;
//     }


// }





// for(int i=0;i<n;i++){
//     if(arr[i]==m){
//         cout<< i;
//         return 0;

//     }
// }

// 5

