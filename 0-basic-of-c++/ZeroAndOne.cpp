#include <iostream>
using namespace std;

int main() {
    // int arr[5] = {1, 1, 0, 0, 1};  
    int arr[6] = {-3, 2,-1,0,3,4};
    int idx0 = 0;
    int n=6;

    // for (int i = 0; i < 5; i++) { 
    //     if (arr[i] == 0) {
    //         swap(arr[idx0], arr[i]);
    //         idx0++;
    //     }
    // }

    int st = 0, end=n-1;

    while(st < end){
        if(arr[st] < 0){
            swap(arr[st], arr[end]);
            st++;
            
        } else if(arr[end] >= 0){
            
            end--;
        } else{
            swap(arr[st], arr[end]);
            st++;
            end--;
        }
    }



    



    // print to verify
    for (int i = 0; i < 6; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
