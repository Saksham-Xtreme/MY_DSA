#include<iostream>
#include<string>
#include<vector>
using namespace std;

void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


void changeArr(int *arr,int n,int i){
    if(i==n){
        print(arr,n);
        return;
    }

    arr[i]=i+1;// normal it gives 1 2 3 4 5
    changeArr(arr,n,i+1);
    arr[i] -=2;//back tracking it gives -1 0 1 2 3
    
}



int main(){

    int arr[5]={0};
    int n=5;
    changeArr(arr,n,0);
    print(arr,n);

    return 0;
}
