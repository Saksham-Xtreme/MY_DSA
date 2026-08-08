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




long long nthBinary(long long n, int k){
    if(k == 0){
        return 0;
    }
    
    bool ans = false;
    while(ans != true){
        long long s = 0;
        int dd = 0;
        int count=0;
        while( y > 0){

            int a = y % 2;
            if(a == 1){
                dd++;
            }

            s = s + a;

            y = y / 2;
        }

        if(dd == k ){
            
            count++;
            if(count == n){
                ans = true;
                return s;
            }
            
        }
    }


}



int main(){
    long long n;
    int k;
    cout << "enter n and k";
    cin >> n >> k;

    long long l = nthBinary(n, k);

    cout << l << endl;


    return 0;
}