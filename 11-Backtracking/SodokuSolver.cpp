#include<iostream>
#include<vector>
#include<string>
using namespace std;

void print(int sodoku[][9]){
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            cout<<sodoku[i][j]<<" ";
        }
        cout<<endl;
    }
}

bool isSafe(int sodoku[9][9],int r,int c,int d){
    //vertical;
    for(int i=0;i<r;i++){
        if(sodoku[i][c]==d){
            return false;
        }
    }

    // horizontal;
    for(int i=0;i<c;i++){
        if(sodoku[r][i]==d){
            return false;
        }
    }

    // in the box;

    int Sr= (r/3)*3;
    int sc=(c/3)*3;

    for(int i=Sr;i<=Sr+2;i++){
        for(int j=sc;j<=sc+2;j++){
            if(sodoku[i][j]==d){
                return false;
            }
        }
    }
    return  true;
}

bool sodokuSolver(int sodoku[9][9],int r,int c){
    if(r==9){
        print(sodoku);
        return true;
    }
    int nxtr=r;
    int nxtc=c+1;
    if(c+1==9){
        nxtr=r+1;
        nxtc=0;
    }
    
    if(sodoku[r][c]!= 0){
        return sodokuSolver(sodoku,nxtr,nxtc);
    }
    
    for(int d=1;d<=9;d++){
        if(isSafe(sodoku,r,c,d)){
            sodoku[r][c]=d;
            if(sodokuSolver(sodoku,nxtr,nxtc)){
                return true;
            }
            sodoku[r][c]=0;
        }
    }

    return false;

}

int main(){
    int sodoku[9][9] = {
        {0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0}
    };
    
    
    sodokuSolver(sodoku,0,0);

    return 0;

}