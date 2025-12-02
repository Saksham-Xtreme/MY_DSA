#include <iostream>
using namespace std;

void insertAtPos(int arr[], int &size, int pos, int value) {
    if(pos < 1 || pos > size+1){
        cout << "Invalid position!\n";
        return;
    }

    for(int i = size - 1; i >= pos - 1; i--){
        arr[i+1] = arr[i];
    }

    arr[pos - 1] = value;
    size++;
}

void deleteAtPos(int arr[], int &size, int pos){
    if(pos < 1 || pos > size){
        cout << "Invalid position!\n";
        return;
    }

    for(int i = pos - 1; i < size - 1; i++){
        arr[i] = arr[i+1];
    }

    size--;
}

int main(){
    int arr[100] = {10, 20, 30, 40, 50};
    int size = 5;

    cout << "Original Array: ";
    for(int i=0; i<size; i++) cout << arr[i] << " ";
    cout << endl;

    insertAtPos(arr, size, 3, 99);

    cout << "After Insert (pos=3, value=99): ";
    for(int i=0; i<size; i++) cout << arr[i] << " ";
    cout << endl;

    deleteAtPos(arr, size, 5);

    cout << "After Delete (pos=5): ";
    for(int i=0; i<size; i++) cout << arr[i] << " ";
    cout << endl;

    return 0;
}
