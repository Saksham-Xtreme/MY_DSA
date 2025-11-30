#include<iostream>
using namespace std;
void maxSubArraySum1(int *arr, int n){
    int maxSum= INT_MIN;
    for(int start=0;start<n;start++){
        for(int end=start;end<n;end++){
            int currSum=0;
            
            for(int i=start;i<=end;i++){
                 currSum+=arr[i];
            }
            cout<<currSum<<",";
            maxSum=max(maxSum,currSum);
        }
        
        cout<<endl;
    }
    cout<<"Max. sub array sum = "<< maxSum<<endl; 
}


int main(){
    int arr[8]={2,4,1,7,6,5,9,3};
    int n= sizeof(arr)/sizeof(int);
    maxSubArraySum1(arr,n);
    return 0;
}