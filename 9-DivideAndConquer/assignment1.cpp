#include<iostream>
#include<string>
#include<vector>
using namespace std;

void merge(string *arr,int si,int mid,int ei){
    vector<string> temp;
    int i=si;
    int j=mid+1;

    while(i<=mid && j<=ei){
        if(arr[i]<= arr[j]){
            temp.push_back(arr[i++]);
        }
        else{
            temp.push_back(arr[j++]);  
        }
    }

    while(i<= mid){
        temp.push_back(arr[i++]);
    }

    while(j<=ei){
        temp.push_back(arr[j++]);
    }

    for(int idx=si,x=0;idx<=ei;idx++){
        arr[idx]= temp[x++];
    }

}



void mergesort(string *arr,int si,int ei){
    if(si>=ei){
        return;
    }

    int mid= si+(ei-si)/2;
    mergesort(arr,si,mid);
    mergesort(arr,mid+1,ei);
    merge(arr,si,mid,ei);
}

void print(string *arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int n;
    cout<<" ent size of array :-> ";
    cin>>n;
    string arr[n];
    for(int i=0;i<n;i++){
        cout<<"ent element "<<i+1<<" -> ";
        cin>>arr[i];
    }
    
    mergesort(arr,0,n-1);
    cout<<" sorted array is -> "  <<endl;
    print(arr,n);
    return 0;
}

