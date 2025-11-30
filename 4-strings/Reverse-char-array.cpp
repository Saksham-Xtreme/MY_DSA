#include<iostream>
using namespace std;

void reverse(char word[],int n){
    int st=0,end=n-1;
    while(st<end){
        swap(word[st],word[end]);
        st++;
        end--;
    }
    cout<<"reverse = "<<word<<endl;
}

int main(){
    char word[50];
    cout<<"ent word not without space and less then 50 :-> ";
    cin.getline(word,50);
    reverse(word,strlen(word));
    return 0;

}