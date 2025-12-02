#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"ent size of array = ";
    cin>>n;
    // int *arr = new int[n];
    int arr[n];
    for( int i=0;i < n;i++){
        cout<<"ent "<<i<<"th no. in array =";
        cin>>arr[i];
    }
    for(int i =0;i < n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}


