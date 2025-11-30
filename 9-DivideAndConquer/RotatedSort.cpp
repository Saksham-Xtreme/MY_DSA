#include<iostream>
#include<vector>
using namespace std;

// here modified binary search approach

// tc=O(logn);

int search(int arr[],int si,int ei, int target){
    if(si>ei){
        return -1;
    }

    int mid = si+(ei-si)/2;
    if(arr[mid]==target){
        return mid;
    }

    if(arr[si]<= arr[mid]){
        if(arr[si]<= target && target <= arr[mid]){
            return search(arr,si,mid-1,target);
        }
        else{
            return search(arr,mid+1,ei,target);

        }
    }
    else{
        if(arr[mid]<=target && target<=arr[ei]){
            return search(arr,mid+1,ei,target);
        }

        else{
            return search(arr,si,mid-1,target);

        }

    }


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
    int target;
    cout<<" ent num to find -> "<<endl;
    cin>>target;
    cout<<"index => " << search(arr,0,n-1,target) +1 <<endl;
    
    return 0;
}