#include<iostream>
#include<string>
using namespace std;

// in func
void counter(){
    
    static int count =0;/* static keyword it holds the value 
    after func is called from memory then also */
    count++;
    cout<<" count : "<<count<<endl;
}


// in class
class Example{
public:
    static  int x; // once created and
};

int Example::x= 0; 
// we set like this for static var which is increasing

class shlok{
public:
    shlok(){
        cout<<"constructor \n";
    }
    ~shlok(){
        cout<<"Destructor \n";
    }
};

int main(){
    counter();
    counter();
    counter();

    Example e1;
    Example e2;
    Example e3;
    cout<<e1.x++<<endl;
    cout<<e2.x++<<endl;
    cout<<e3.x++<<endl;
    
// static object
    int a=0;
    if(a==0){
        static shlok s1;
    }

    cout<<"code ending \n";



    return 0;
}