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
        milage=original.milage;
        
    }
};

int main(){
    Car c1("Range Rover","Black");
    Car c2(c1);

    cout<< c2.name <<endl;
    cout<< c2.color <<endl;
    cout<< *c2.milage <<endl;


    return 0;
}