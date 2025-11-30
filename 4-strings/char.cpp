#include<iostream>
using namespace std;

int main(){
    char work[]="code";
    char input[10];
    char word[49];
    //cin>>input;// take only before space words like "hello bhai" prints hello only
    cin.getline(word,49,'.'); // it take full sentence with space and where . is there it will end seeing



    cout<<"your word was : "<<word<<endl;
    cout<<strlen(word)<<endl;// to find string length

    return 0;
    

}