#include<iostream>
using namespace std;


void daigonalsum(int mtx[][4],int n ){
    int sum=0;
    /* for(int i=0;i<n;i++){//rows
        for(int j=0;j<n;j++){//colms
            if(i==j){// primary daigonal
                sum+= mtx[i][j];
            }
            else if(j==n-i-1){// secondary daigonal
                sum+= mtx[i][j];
            }
        }
    }
    cout<<" sum = "<<sum<<endl; */

    for(int i=0;i<n;i++){
        sum+= mtx[i][i]; //pd
        if(i!=n-i-1){
            sum+=mtx[i][n-i-1];//sd
        }
    }
    cout<<" sum = "<<sum<<endl;


}

int main(){
    cout<<endl;
    int mtx[4][4]{
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}};
    daigonalsum(mtx,4);
    cout<<endl;
    return 0;
}
