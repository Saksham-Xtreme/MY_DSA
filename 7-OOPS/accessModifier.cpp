#include<iostream>
#include<string>
using namespace std;

class Student {
public://without this u cant access this class outside
// by default it is pvt
    // Properties
    string name;
    float cgpa;
    
    //methods
    void getPercentage( ){
        cout<<(cgpa * 10)<<"% \n";

    }
};


/*
diff btw private and protected is that 
pvt can be access only inside the class
but protected can be access inside class
and derived class also
but both can't be access in main func
private class is inheritable
*/



int main(){

    Student s1; // object
    cout<<"ent name -> ";
    cin>>s1.name;
    cout<<"ent cgpa -> ";
    cin>>s1.cgpa;
    s1.getPercentage();

    return 0;

}