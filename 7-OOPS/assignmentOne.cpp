/*
Create a class Bank Account with private attributes 
accountNumber and balance. Implement public methods 
deposit(),withdraw(),and getBalance() to manage the account.
*/

#include<iostream>
#include<string>
using namespace std;

class Bank{
    int accNum;
    float balance;
public:

    Bank(int acc, float bal) {
        accNum = acc;
        balance = bal;
    }
    void deposit(float depAmt){
        balance+=depAmt;
        cout<<"New balance after deposit = "<<balance<<endl;
    }

    void withdraw(float withAmt){
        if(withAmt>balance){
            cout<<"insufficient balance !!!\n";
        }
        else{
            balance-=withAmt;
        cout<<"New balance after withdraw = "<<balance<<endl;
        }
       
    }

    void getBalance(){
        cout<<"balance = "<<balance<<endl;
    }

};

int main(){
    Bank b1(6675345,1000.1);
    
    b1.deposit(500);
    b1.withdraw(400);
    b1.getBalance();
    return 0;
}