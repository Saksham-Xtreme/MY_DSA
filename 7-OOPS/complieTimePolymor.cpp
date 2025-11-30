// function overloading same name func diff parameter

#include<iostream>
#include<string>
using namespace std;

class Print{
public:
    void show(int x){
        cout<<"int: "<<x<<endl;
    }
    void show(string s){
        cout<<"string: "<<s<<endl;
    }
};

// opreator overloading 

class Complex{

    int real;
    int img;
public:
    Complex(int r,int i){
        real=r;
        img=i;
    }

    void showNum(){
        cout<<real<<" + "<<img<<"i\n";
    }

    // opreator overloading
    Complex operator + (Complex &c2){
        int resReal=this->real+c2.real;
        int resImg=this->img+c2.img;
        Complex c3(resReal,resImg);
        return c3;
      
    }

};


int main(){
    Complex c1(1,3);
    Complex c2(2,6);
    c1.showNum();
    c2.showNum();
    Complex c3=c1+c2;
    cout<< "result: ";
    c3.showNum();
    return 0;
}
