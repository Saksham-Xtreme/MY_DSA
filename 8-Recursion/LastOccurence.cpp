#include<iostream>
#include<vector>
using namespace std;

int LastOcur(int *arr,int k,int i){
    if(i==0){
        return -1;
    }
    if(arr[i]==k){
        return i+1;
    }

    return LastOcur(arr,k,i-1);
}


int main(){
    int n;
    cout<<" ent size of array -> ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"ent element no. "<<i+1<<" -> ";
        cin>>arr[i];
    }
    int o,k=n;
    cout<<"ent target to get last occurence :-> ";
    cin>>o;
    cout<< LastOcur(arr,o,k)<<endl;
    return 0;
}