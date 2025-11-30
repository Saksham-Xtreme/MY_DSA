// cstring func

#include<iostream>
#include<cstring> // cstring func to call in header
using namespace std;
int main(){
    char str[100];
    char str1[100]="saksham bhai is best";
    // str="saksham is best"; error cant do like this
    strcpy(str,"mircrosoft ");// do like this 
    // strcpy(str,str1); // change one to another
    strcat(str,str1); // to add like "abs" & "hii" -> abshii
    cout<<str<<endl;
    char yo[100]="abc";
    char hi[100]="xyz";
    cout<< strcmp(yo,hi)<<endl;
    // use for comparison 0 for equal and if 1st > 2nd +ve value and if 1st < 2nd then a -ve value
    // it goes word by word like a to x and then b to y and then c to z like this
    
}