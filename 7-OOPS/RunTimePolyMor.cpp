// func overriding-> (p & c)both classes have same name func

#include<iostream>
#include<string>
using namespace std;

class Parent{
public:
    void show(){
        cout<<"parent class show...\n";

    }

    virtual void hello(){
        cout<<"Parent hello\n";
    }
};

/*

Child class func >>>> inheritance

*/

class Child: public Parent{   // both have same name func
public:
    void show(){
        cout<<"Child class show..\n";

    }
    void hello(){
        cout<<"Child hello\n";
    }
};

/*

virtual func:-> a virtual func is a mem
func that u expect to be redifined in derived
class

1. dynamic in natue
2. defined by 'virtual'keyword inside base
class and always declared in base class
and overriden in a child class

*/

int main(){
    Child c1;
    Parent *ptr;
    ptr=&c1;      // runtime binding

    ptr->hello();   // virtual func
    
    c1.show();    // it will call func of class obj

    return 0;
}

