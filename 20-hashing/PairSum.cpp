// LEETCODE wala hai
/*

1. brute force nested loop O(n2)

2. sort ( 2 ptr approach) O(nlogn)

3. using unordered map <arr[i], i>

*/

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

int main(){
    int arr[7] = {1,2,7,11,15,5,9};

    int n=7;
    int tar=9;
    unordered_map<int , int> m;

    for(int i=0;i<n;i++){
        int x=tar-arr[i];
        if(m.count(x)){
            cout<<"ans = "<<m[x]<<" , "<< i<<endl;
            break;
        }

        m[arr[i]]=i;


    }
    return 0;
}