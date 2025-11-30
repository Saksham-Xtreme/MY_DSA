#include<iostream>
using namespace std;

void transpose(int mtx[][3],int n,int m){
    int trans[m][n];
    for(int i=0;i<=n-1;i++){
        for(int j=0;j<=m-1;j++){
            trans[j][i]=mtx[i][j];
        }
    }

    for(int i=0;i<=m-1;i++){
        for(int j=0;j<=n-1;j++){
            cout<<trans[i][j]<<" ";
        }
        cout<<endl;
    }
    
}

int main(){
    int mtx[2][3]{
        {10,20,30},
        {40,50,60}
    };
    transpose(mtx,2,3);
    return 0;
}