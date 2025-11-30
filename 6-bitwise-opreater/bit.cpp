#include<iostream>
using namespace std;

int main(){ // dec to bin then to dec


    // bitwise and  
    cout<<(3 & 5)<<endl;//1 (001)

    //bitwise or
    cout<<(3 | 5)<<endl;//7 (0111)

    //bitwise xor
    cout<<(3 ^ 5)<<endl;//6 (110) same =0 and diff=1
    

    cout<<(~ 6)<<endl;//(-7) due toh precediing zero 0000 0110 to 1111 1001 this now ones compliement
    // but how we know it is -7
    // msb sign bit 1  = -ve and 0=+ve
    //  (1 tell sign)111 1001  
    // 011 +1=111 equal 7 thats why it is -7
    // also called 2's complemet

    cout<<(7<<2)<<endl;
    //left swift-> 7<<2 means
    // 00111 -> 01110->11100 = 28
    // a<<b = a*2^b; like 7<<2=7*2^2=7*4=28

    cout<<(7>>2)<<endl;
    // right swift  7>>2;
    // 0111->011->01=1
    // a>>b -> a/2^b;


    return 0;
}