/*

destructor is mostly self built
but when there is any dynamic memory allocation
then we explicitly delete it.

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
        milage=new int;//dynamic allocation
        *milage= 12;
    }
    Car(Car &original){
        cout<<"copying original to new ..\n";
        name=original.name;
        color=original.color;
        milage=new int;// deep copy ke liye imp
        *milage= *original.milage;
        
    }

    ~Car(){
        cout<<"deleting obj"<<endl;
        if(milage != NULL){
            delete milage;
            milage=NULL;
        }
    }
};

int main(){
    Car c1("Range Rover","Black");
    

    cout<< c1.name <<endl;
    cout<< c1.color <<endl;
    cout<< *c1.milage <<endl;


    return 0;
}