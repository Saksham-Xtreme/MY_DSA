#include<iostream>
using namespace std;

/*void search(int mtx[][4],int n,int m){
   brute force
    int key;
    cin>>key;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(mtx[i][j]==key){
                cout<<i<<","<<j<<" is the postn of "<<key<<endl;
                break;
            }
        }
    }

     
} */


// staircase method
bool search(int mtx[][4],int n,int m){
    int key;
    cout<<" ent your key ";
    cin>>key;
    int i=0,j=m-1;

    while(i<n && j>=0){
        if(mtx[i][j]==key){
            cout<<"found at cell {"<<i<<","<<j<<"}\n";
            return true;
            
        }
        else if(mtx[i][j]>key){
            //left
            j--;
        }
        else{
            //down
            i++;
        }
    }
    cout<<"key not found\n";
    return false;
    
} 

int main(){
    int mtx[4][4]{
        {10,20,30,40},
        {15,25,35,45},
        {27,29,37,48},
        {32,33,39,50}};
    search(mtx,4,4);
    return 0;
}