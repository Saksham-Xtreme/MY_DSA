#include<iostream>
using namespace std;

int main(){
    int r,c;
    cout<<"ent rows : "<<endl;
    cin>>r;
    cout<<"ent columns : "<<endl;
    cin>>c;
    int* *mtx= new int*[r];// most important line
    
    for(int i=0;i<r;i++){
        mtx[i]=new int[c];
    }
    //data storing
    int x=1;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            mtx[i][j]=x++; 
            cout<<mtx[i][j]<<" ";//=*(*(mtx+i)+j)
        }
        cout<<endl;
    }

    cout<<mtx[2][2]<<endl;
    cout<<*(*(mtx+2)+2)<<endl;
    return 0;

}