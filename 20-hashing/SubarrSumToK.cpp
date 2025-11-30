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
int SubarrCountK(vector<int> arr, int K){ // sum[i to j]= sum[j]-sum[i];
    unordered_map<int,int> m;
    m[0]=1;
    int count=0;
    int sum=0;
    for(int j=0;j<arr.size();j++){
        sum+=arr[j];
        if(m.count(sum-K)){
            count+=m[sum-K];
        }

        if(m.count(sum)){
            m[sum]++;
        } else{
            m[sum]=1;
        }

    }

    return count;
}


int main(){
    vector<int> arr={10,2,-2,-20,10};
    int K=-10;

    cout<<"answer = "<<SubarrCountK(arr, K)<<endl;
    return 0;
}