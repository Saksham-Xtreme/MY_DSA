#include<iostream>
#include<string>
using namespace std;

class Student {
    // Properties
    string name;
    float cgpa;
    
    //methods
    void getPercentage( ){
        cout<<(cgpa * 10)<<"% \n";

    }
};

/* class User{
    int id;
    string username;
    string password;
    string bio;

    void deactivate(){
        cout<<"deleting account\n";
    }

    void editbio(string newbio){
        bio=newbio;
    }
};
*/


int main(){

    Student s1; // object
    cout<< sizeof(s1)<<endl;
    return 0;

}