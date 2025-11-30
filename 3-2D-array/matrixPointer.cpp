#include<iostream>
using namespace std;
//row se update hota hai aur phle no. ko point krta hai
void func(int (*mtx)[4],int n,int m){


    cout<< *(*(mtx+2) + 2)<<endl;
}
int main(){
    int mtx[4][4]{
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}};
    cout<<mtx<<" = "<<&mtx[0][0]<<endl;
    cout<<mtx+1<<" != "<<&mtx[0][1]<<endl;
    cout<<mtx+1<<" = "<<&mtx[1][0]<<endl;
    func(mtx,4,4);
    // mtx[i][j]==*(*(ptr+i)+j);
    // *(ptr+i)= row no. and when we add it with j and use pointer then we get our index
    return 0;
}
