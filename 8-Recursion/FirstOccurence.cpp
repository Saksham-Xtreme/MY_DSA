#include<iostream>
using namespace std;

int FirstOcur(vector<int> arr,int k,int i){
    if(i==arr.size()){
        return -1;
    }
    if(arr[i]==k){
        return i+1;
    }

    return FirstOcur(arr,k,i+1);

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
    int o;
    cout<<"ent target to get first occurence :-> ";
    cin>>o;
    cout<< FirstOcur(arr,o,k)<<endl;
    return 0;
}