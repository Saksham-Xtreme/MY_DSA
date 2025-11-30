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

int countDistinct(vector<int> arr){
    unordered_set<int> s;

    for(int i=0;i<arr.size();i++){
        s.insert(arr[i]);
    }


    return s.size();
}

int main(){
    vector<int> arr={4,3,2,5,6,7,3,4,2,1};
    cout<< "count => "<< countDistinct(arr)<<endl;
    return 0;
}