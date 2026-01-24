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
    int t ;
    cin >> t;
    

    while(t != 0){
        int n;
        cin >> n;
        vector<string> arr(n);
        

        for(int i=0;i<n;i++){
            cin >> arr[i];
        }

        string s ="";
        for(int i=0;i<n;i++){
            s=  min(s+arr[i], arr[i]+s);
        }

        cout<< s << endl;


        t--;
    }

    
    return 0;
}