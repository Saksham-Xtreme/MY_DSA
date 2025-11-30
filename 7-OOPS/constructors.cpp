/*

it is a special method which invoked
automatically at time of object creation.
used for instialisation.

1. same name as class 
2. it doesn't have return type
3. only called once(autmatically), 
    at obj creation;
4. memory allocation only happens 
   when constuctor is called
5. can write multiple constr with same name class
    called constrtor overloading

this is a special pointer in C++ that
points to the current obj

this->prop is same as *(this).prop

this points to c1 like *this.name or this->name

*/

//special method;
// use to not to access dircetly;


#include<iostream>
#include<string>
using namespace std;

class Car {

   string name;
   string color;
public:
    /*Car(string nameval, string colorval){ // constructor
    
        cout<<"constructor is called & obj created"<<endl;
        name=nameval;
        color=colorval;
    }
    */

    
    Car(){ // non-parametrized constr

        cout<<"const without para "<<endl;
    }
    Car(string name,string color){ // parameterized constructor
        cout<<"const with para "<<endl;
        this->name=name;
        this->color=color;
    }
   void start(){
    cout<<"car started. \n";
   }

   void stop(){
    cout<<"car stopped. \n";

   }

   // getter to see output
   string getname(){
    return name;
   }

   string getcolor(){
    return color;
   }


};

int main(){
    Car c0;// to show

    Car c1("range rover","black");
    cout<<endl;
    cout<<"car name-> "<< c1.getname()<<endl;
    cout<<"car's color name-> "<< c1.getcolor()<<endl;
    cout<<endl;
    
    return 0;

}