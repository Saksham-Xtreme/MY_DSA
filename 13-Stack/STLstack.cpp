#include<iostream>
#include<vector>
#include<list>
#include<stack>
using namespace std;


int main(){
    // STL 
    stack<int> s;
    s.push(3);
    s.push(2);
    s.push(1);

    while(!s.empty()){   // ✅ fix
        cout << s.top() << " ";
        s.pop();
    }

    return 0;
}
