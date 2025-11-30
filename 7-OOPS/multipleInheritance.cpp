#include<iostream>
#include<string>
using namespace std;

class Teacher {
public:
    int salary;
    string subject;
};


class Student{
public:
    int rollno;
    float cgpa;

};

class TA : public Teacher,public Student{//multiple inheritance
public:
    string name;
};

int main(){
    TA ta1;
    ta1.name="saksham";
    ta1.subject="C++";
    ta1.cgpa=9.6;
    cout<<endl;
    cout<<ta1.name<<endl;
    cout<<ta1.subject<<endl;
    cout<<ta1.cgpa<<endl;
    return 0;
    
}