/*

when properties and member func of
base/parent/ super class are passed on
the derived/sub/child class.

class A --->>> Class B
it happens for code reusabilty

Mode of Inheritance

tag in base class ||public        || protected  ||  private

public              public        || protected       private
protected           protected     || protected       private
private             not accessible  not accessible  not accessible

private class is inheritable

*/

#include<iostream>
#include<string>
using namespace std;

class Animal{
public:
    string color;
    void eats(){
        cout<<"Eats\n";
    }
    void breathe(){
        cout<<"Breaths\n";
    }
};

class Fish: public Animal { // Inherting animal to fish
public:
    int fins;
    void swim(){
        cout<<"swim"<<endl;
    }
};

int main(){
    Fish f1;
    f1.fins=3;
    cout<<f1.fins<<endl;
    f1.swim();
    f1.eats();
    f1.breathe();
    return 0;
}