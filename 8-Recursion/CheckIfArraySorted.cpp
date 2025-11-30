

#include<iostream>
using namespace std;

bool isSorted(int *arr,int n,int i){
    if(i==n-1){
        return true;
    }
    
    if(arr[i] > arr[i+1]){
        return false;
    }

    return isSorted(arr,n,i+1);

}


int main(){
    int n,k=0;
    cout<<" ent size of array -> ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"ent element no. "<<i+1<<" -> ";
        cin>>arr[i];
    }

    cout<< isSorted(arr,n,k)<<endl;
    return 0;
}