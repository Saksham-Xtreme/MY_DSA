#include<iostream>
#include<vector>
using namespace std;


// memonization
int fibDP(int n, vector<int> &f){
    if(n==0 || n==1){
        return n;
    }

    if(f[n] != -1){
        return f[n];
    }
    f[n] = fibDP(n-1, f) + fibDP(n-2, f);
    return f[n];
}

// with tabulation;
int fibDPT(int n){
    vector<int> f(n+1, 0);

    f[0]=0;
    f[1]=1;

    for(int i=2;i<n+1;i++){
        f[i]=f[i-1]+f[i-2];
    }

    return f[n];
}


int main(){
    int n = 6;
    vector<int> f(n+1, -1);
    cout<< " The Memoization Method = ";
    cout<< fibDP(n, f) << endl;

    cout<< " The Tabulation Method = ";
    cout<< fibDPT(n) << endl;
    return 0;
}