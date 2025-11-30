//special method;
// use to not to access dircetly;

#include<iostream>
#include<string>
using namespace std;

class Student {
    // they are pvt here
    string name;
    float cgpa;
public://not got direct access

    void getPercentage( ){
        cout<<(cgpa * 10)<<"% \n";

    }

    // setters to set or input
    void setName(string nameval){
        name=nameval;
    }

    void setcgpa(float cgpaval){
        cgpa=cgpaval;
    }

    // getters to return or output
    string getName(){
        return name;
    }

    float getcgpa(){
        return cgpa;
    }

};




int main(){

    Student s1; 
    // input
    cout<<endl;
    s1.setName("Saksham");
    s1.setcgpa(9.1);
    
    // output
    cout<<s1.getName()<<endl;
    cout<<s1.getcgpa()<<endl;
    cout<<endl;
    return 0;

}