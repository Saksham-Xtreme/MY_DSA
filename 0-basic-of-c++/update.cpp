#include<iostream>
#include<vector>
#include<queue>
#include<stack>
#include<string>
#include<cmath>
#include<list>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
#include<climits>
using namespace std;

int func(int n){
    static int a = 3;
    int b = 4;

    if(n == 0){
        return 0;
    }

    b=a++;
    a=a+b;

    return func(n-1)+a+b;


}

int main(){
    int k = func(3);
    cout << k << endl;  
    return 0;
}