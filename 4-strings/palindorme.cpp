#include<iostream>
using namespace std;

bool palindrome(char word[],int n){
    
    int st=0,end=n-1;
    while(st<end){
        if(word[st] != word[end]){
            return false;
        }
        st++;
        end--;
    }
    return true;
   
}

int main(){
    char word[50];
    cout<<"ent word not without space and less then 50 :-> ";
    cin.getline(word,50);
    bool l=palindrome(word,strlen(word));
    cout<<l<<endl;
    return 0;

}