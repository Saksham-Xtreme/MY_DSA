  #include<iostream>
  using namespace std;
  int main(){
    int a =5;
    int *ptr1= &a;
    int *ptr2 = ptr1 + 3;
    cout<<ptr2<<"\n";
    cout<<ptr1<<"\n";

    cout<<ptr2-ptr1<<"     the nos are hexa decimal so space are like 08,09,a,b,c,d,e,f,10,11,12,13,14"<<"\n";
    return 0;
  }