/*
Hiding all uneccesary detail & showing imp part

using access modifier is also a part of abstarction
 and more are 1. Abstract Classes and virtual func
1. in abstract class we do not create obj
it only use to inherited and give blueprint to child class
 we have atleast one pure virtual func

2. A pure virtual func is a virtual func with no defination/logic
It is declared by assigning 0 at the time of declartion.



Ques. diff btw encapsulation and abstraction?

encapsulation talks about wraping and binding up data in a class
and in Abstraction we hide data and show important also

PROPERTIES OF ABSTRACT CLASSES

Abstract classes are used to provide base class from which other class
can be derived

they cannot be instantiated and are meant to be inherited

Abstract classes are typically used to define an interface for derived classes


*/

#include<iostream>
#include<string>
using namespace std;

// Abstract class

class Shape{
public:

    virtual void draw()=0;// abstract func,pure virtual func
};

class Square : public Shape{
public:
    void draw(){
        cout<<"draw square \n";
    }

};

class Circle : public Shape{
    public:
        void draw(){
            cout<<"draw circle \n";
        }
    
};

int main(){
    Circle cir1;
    cir1.draw();
    
    Square sq1;
    sq1.draw();
    return 0;
}
