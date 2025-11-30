#include<stdio.h>
int main(){
    int arr[100],n;
    printf("enter size of array: ");
    scanf("%d",&n);
    printf("enter elements of array: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int largest = arr[0];
    int secondLargest = -1;
    for(int i=1;i<n;i++){
        if(arr[i]>largest){
            secondLargest = largest;
            largest = arr[i];
        }
        else if(arr[i]>secondLargest && arr[i]<largest){
            secondLargest = arr[i];
        }
    }
    printf("second largest element is: %d",secondLargest);
}