/*

shallow copy copies refrence to
original array but array remain same

Deep copy created  a brand new copy 
of the array
*/

#include<iostream>
#include<string>
using namespace std;

class Car{
    public:
        string name;
        string color;
        int *milage;
    
    
    Car(string name, string color){
        this->name=name;
        this->color=color;
        milage=new int;  //dynamic allocation
        *milage= 12;
    }
    Car(Car &original){
        cout<<"copying original to new ..\n";
        name=original.name;
        color=original.color;
        milage=new int; // deep copy ke liye imp
        *milage= *original.milage;
        
    }
    /*
    
    as we have not deleted milage
    as it was dynamiclly allocated 
    there will be memory leak;

    */
};

int main(){
    Car c1("Range Rover","Black");
    Car c2(c1);

    cout<< c2.name <<endl;
    cout<< c2.color <<endl;
    cout<< *c2.milage <<endl;
    *c2.milage=10;// change in c2 make change in c1
    cout<<*c1.milage<<endl;
    cout<< *c2.milage <<endl;

    return 0;
}