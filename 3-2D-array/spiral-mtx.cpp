#include<iostream>
using namespace std;

void spiralmtx(int mtx[][4], int n,int m){
    int srow=0,scol=0;
    int erow=n-1,ecol=m-1;

    while(srow<=erow && scol<=ecol  ){
        // top
        for(int j=scol;j<=ecol;j++){
            cout<<mtx[srow][j]<<" ";
        }
    
        //right
        for(int i=srow+1;i<=erow;i++){
            cout<< mtx[i][ecol]<<" ";
        }
        //bottom
        for(int j=ecol-1;j>=scol;j--){
            if(srow==erow){ // this corner case exist for a odd when we try simply it will duplicate and to avoid that we use this condn;
                break;
            }
            cout<<mtx[erow][j]<<" ";
        }
        //left
        for(int i=erow-1;i>=srow+1;i--){
            if(scol==ecol){
                break;
            }
            cout<<mtx[i][scol]<<" ";
        }
        srow++;
        scol++;
        erow--;
        ecol--;
    }
    cout<<endl;

}

int main(){
    int mtx[4][4]{
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}};
    spiralmtx(mtx,4,4);
    return 0;
}
