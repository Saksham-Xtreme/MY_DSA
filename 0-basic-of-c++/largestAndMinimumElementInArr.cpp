#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"ent size of array = ";
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max=0,min=arr[0];
    for(int i=0;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
        }
        if(min>arr[i]){
            min = arr[i];
        }
    }
    cout<<"largest element of array = "<<max<<endl;
    cout<<"minimum element of array = "<<min<<endl;
    return 0;

}