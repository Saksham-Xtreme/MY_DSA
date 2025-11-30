#include<iostream>
#include<string>
using namespace std;

class A{
    string secret=" secret Data \n";
    friend class B; // friend class allow to access pvt and protect data also
};

class B{ // becomes frnd class of A
public:
    void ShowSecret(A &obj){
        cout<< obj.secret<<endl;
    }
};

int main(){
    A a1;
    B b1;

    b1.ShowSecret(a1);
    return 0;

}