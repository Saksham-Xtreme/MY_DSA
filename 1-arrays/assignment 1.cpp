/*
Givenanintegerarraynums,returntrueifanyvalueappearsatleasttwiceinthearray,andreturnfalseifeveryelementisdistinct
*/
#include<iostream>
using namespace std;
bool repeat(int *nums,int n){
    int check=0;
    for(int i=0;i<n;i++){
        int a=nums[i];
        for(int j=0;j<n;j++){
            if(a==nums[j]){
                check++;
            }

        }
    }
    if(check>1){
        return true;
    }
    else{
        return false;
    }
}


int main(){
    int nums[4]={1,2,3,1};
    int n=sizeof(nums)/sizeof(int);
    repeat(nums,n);
    return 0;
}
