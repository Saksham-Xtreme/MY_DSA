/*

create a user class with properties
id,password(pvt) & username(public);

it should have getter and setter for password

*/

#include<iostream>
using namespace std;

class User{
private:
    int id;
    string password;

public:
    string username;

    User(int id){
        this->id = id;
    }

    // Getter
    string getPass(){
        return password;
    }

    void setPass(string password){
        this->password = password;
    }
};


int main(){
    User user1(101);
    user1.username="Saksham";
    user1.setPass("XYZ");

    cout<<"Username-> "<<user1.username<<endl;
    cout<<"Password-> "<<user1.getPass()<<endl;

    return 0;
}