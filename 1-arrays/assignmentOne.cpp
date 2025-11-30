/*
Givenanintegerarraynums,returntrueifanyvalueappearsatleasttwiceinthearray,andreturnfalseifeveryelementisdistinct
*/
#include<iostream>
using namespace std;
void repeat(int *nums,int n){
    int check=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i!=j && nums[i]==nums[j]){
                check+=1;
                break;
            }
        }
    }
    if(check>0){
        cout<<true<<endl;
    }
    else{
        cout<<false<<endl;
    }
}
int main(){
    int nums[4]={1,2,3,1};
    int n=sizeof(nums)/sizeof(int);
    repeat(nums,n);
    return 0;
}
