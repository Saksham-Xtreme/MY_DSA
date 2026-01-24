#include<iostream>
#include<vector>
#include<queue>
#include<stack>
#include<string>
#include<cmath>
#include <algorithm>
#include<list>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
#include<climits>
using namespace std;

int main(){
    int t;

    cin >> t;


    while(t !=0){

        int n , h, l;
        cin>>n >> h >> l ;

        int r =0, c =0;

        for(int i =0; i< n ;i++){
            int x;
            cin >> x;

            if( x <= h){
                r++;
            }

            if(x <= l){
                c++;
            }
        }

        int pair= n/2;

        int ans = min({pair, r, c});

        cout << ans << "\n";
        

        t--;

    }


    return 0;
}

