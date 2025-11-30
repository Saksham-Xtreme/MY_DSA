// find elements that appear more than n/3 time
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

void majorityEle(vector<int> nums){
    unordered_map<int,int> m;
    
    for(int i=0;i<nums.size();i++){
        if(m.count(nums[i])){
            m[nums[i]]++;

        } else{
            m[nums[i]]=1;
        }
    }

    cout<<" nums are ";
    for(pair<int,int> p: m){
        if(p.second > nums.size()/3){
            cout<< p.first<<" ";
        }

    }
    cout<<endl;

}


int main(){
    vector<int> nums1={1,3,2,5,1,3,1,5,1};
    vector<int> nums2={1,2};

    majorityEle(nums1);
    majorityEle(nums2);
    return 0;
}