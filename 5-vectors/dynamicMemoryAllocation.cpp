#include<iostream>
using namespace std;

void func(){
    int size;
    cin>>size;
    int *arr=new int[size];
    int x=1;
    for(int i=0;i<size;i++){
        arr[i]=x;
        x++;
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    delete[]arr;// to delete dynamic memory whenever use new always use delete

}

int main(){
   /* int size;
    cin>>size;
    int *arr=new int[size];
    int x=1;
    for(int i=0;i<size;i++){
        arr[i]=x;
        x++;
        cout<<arr[i]<<" ";
    }*/
    func();
    return 0;
}