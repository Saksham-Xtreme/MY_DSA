#include<iostream>
using namespace std;
void printArr(int *arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    cout<<endl;
}


int main(){
    int n,key;
    cout<<" ent size of array = ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"ent element no. "<<i+1<<" = ";
        cin>>arr[i];
    }
    cout<<"ent element which u want to find = ";
    cin>>key;
    int start =0,end=n-1,mid =0;
    while(start<=n){

        mid=(start + end)/2;

        if(arr[mid]==key){
           cout<<"the loction of "<<key<<" is = "<<mid<<endl;
           break;
        }else if(arr[mid]>key){
            end=mid-1;
        } else{
            start = mid+1;
        }
        
    }
    return 0;
    
}