/*

1.single inheritance
  base class
      |
      |
   derived class


2. Multi-Level inheritance
   base class
       |
       | 1
    derived class
       |
       |2
    derived class
    
    example: animal(eat,breathe)-->mamamal(animal,blood=warm)--> dog(animal,mamal,tailTag())


3.Multiple Inheritance

   Base class   Base class
     \              /
      \            /
       Derived Class

code 3. see in multipleInheritance.cpp

4.Hierarical inheritance
            base class
            /      \
           /        \
    derived cls     derived class

5.Hybrid inheritance : combination of all inheritance

*/

#include<iostream>
#include<string>
using namespace std;

class Animal{
public:
    void eat(){
        cout<<"eat"<<endl;
    }
    void breathe(){
        cout<<"breathe"<<endl;
    }

};

class Mammal: public Animal{
public:
    string blood;
    Mammal(){
        blood="Warm";
    }

};

class Dog: public Mammal{
public:
    void tail(){
        cout<<"It has tail"<<endl;
    }
};

int main(){
    Dog d1;
    d1.eat();
    d1.breathe();
    d1.tail();
    cout<<d1.blood<<endl;
}