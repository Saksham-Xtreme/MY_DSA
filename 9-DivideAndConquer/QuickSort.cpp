// advantage to comp to merge is 
// sc=O(1)
// tc avg= O(nlogn), tc worst=O(n2)

// used to do as ascending order

// it used on pivot and partition approach
// pivot is a spcal idx mostly ending 

#include<iostream>
#include<vector>
using namespace std;

int partition(int arr[],int si,int ei){
    int i=si-1;
    int pivot =arr[ei];

    for(int j=si;j<ei;j++){
        if(arr[j]<= pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }

    i++;
    swap(arr[i],arr[ei]);

    return i;
}

void quicksort(int arr[],int si,int ei){
    if(si>=ei){
        return;
    }

    int pivotIdx=partition(arr,si,ei);
    
    quicksort(arr,si,pivotIdx-1);
    quicksort(arr,pivotIdx+1,ei);
}

void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int n;
    cout<<" ent size of array :-> ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"ent element "<<i+1<<" -> ";
        cin>>arr[i];
    }
    
    quicksort(arr,0,n-1);
    cout<<" sorted array is -> "  <<endl;
    print(arr,n);
    return 0;
}

/*
why worst case is o(n2);
  if element is already sorted in acsending or descending
*/