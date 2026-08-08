#include<iostream>
using namespace std;


void printArr(int *arr , int n){
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


int main(){
    int n;
    cout<<"ent size of array = ";
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cout<<" ent element no. "<<i+1<<" = ";
        cin>>arr[i];
    }
    printArr(arr,n);
    cout<<endl;
    int start =0, end = n-1;
    while(start<end){
        int temp =arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }


    printArr(arr,n);
    return 0;
}

// 1 2 3 4 
// 4 2 3 1
// 4 3 2 1 

// O(log n) SC = 0;