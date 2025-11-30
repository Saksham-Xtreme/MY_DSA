#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<vector<int>> mtx={{1,2,3},{4,5},{7}};//same no. element in each row not important

    for(int i=0;i<mtx.size();i++){// travel row
        for(int j=0;j<mtx[i].size();j++){//travel column
            cout<<mtx[i][j]<<" ";

        }
        cout<<endl;
    }

    return 0;
}