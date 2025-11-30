// sort activites on the basis of end time
// they should be non overlapping 
#include<iostream>
#include<vector>
#include<queue>
#include<stack>
#include<string>
#include<cmath>
#include<list>
using namespace std;

int maxActSel( vector<int> start,vector<int> end){
    //sort on end time
    //select a0 as base activity
    int count=1;
    int currEndTime =end[0];
    for(int i=1;i<start.size();i++){
        if(start[i]>= currEndTime){ // non overlapping condition
            cout<<"selecting activity A"<<i<<endl;
            count++;
            currEndTime=end[i];
        }

    }

    return count;

}

int main(){
    vector<int> start={1,3,0,5,8,5};
    vector<int> end={2,4,6,7,9,9};

    cout<<maxActSel(start,end)<<endl;
    
    return 0;
}