#include<iostream>
#include<vector>
#include<queue>
#include<stack>
#include<string>
#include<cmath>
#include<list>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
#include<climits>
using namespace std;

int largSub(vector<int> arr){
    unordered_map<int,int> m; // sum and idx
    int sum=0;
    int ans=0;
    for(int j=0;j<arr.size();j++){
        sum+=arr[j];
        if(m.count(sum)){
           int curLen=j-m[sum];
           ans=max(ans,curLen);
        } else{
            m[sum]=j;
        }
    }

    return ans;

}


int main(){
    vector<int> arr={15,-2,2,-8,1,7,10};
    cout<< "Largest SubARr with Sum 0 is : "<< largSub(arr)<<endl;
    return 0;
}