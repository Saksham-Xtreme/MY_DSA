#include<iostream>
#include<vector>
#include<queue>
#include<stack>
#include<string>
#include<cmath>
#include<list>
#include<map>
#include<climits>
using namespace std;

class Student{
public: 
    string name;
    int marks;

    Student(string name, int marks){
        this->name=name;
        this->marks=marks;
    }

    bool operator < (const Student &obj) const{ // building max heap on basis of marks
        return this->marks < obj.marks;
    } // for min heap just make < to > at return place not at func place
};

int main(){
    priority_queue<Student> pq;
    pq.push(Student("aman", 85));
    pq.push(Student("rajiv", 65));
    pq.push(Student("Saksham", 95));

    while(!pq.empty()){
        cout<<"Top -> "<< pq.top().name<<","<<pq.top().marks<<endl;
        pq.pop();
    }
    return 0;
}