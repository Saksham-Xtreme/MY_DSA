#include<iostream>
using namespace std;

void toUpper(char word[],int n){
    for(int i=0;i<n;i++){
        char ch =word[i];
        if(ch>='A' && ch<='Z'){
            continue;
        }
        else{
            word[i]=ch-'a'+'A';
        }
    }
    cout<<word<<endl;
}

int main(){
    char word[50];
    cout<<"ent word not without space and less then 50 :-> ";
    cin.getline(word,50);
    toUpper(word,strlen(word));
    return 0;

}