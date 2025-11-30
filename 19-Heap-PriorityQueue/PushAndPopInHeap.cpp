/*

to push in heap we first {
    heap -> insert(value)
    push_back

    then, fix heap ->  Tc : O(logn)
    P-C relation ship
    while(x> parent){
        swap(x,parent);
        x=parentidx;
        parentidx=(x-1)/2;
}

to pop in we
    we swap (root, with last ele)
    delete this last element
        vec.pop_back

    then fix heap
        heapify this func is used to fix the heap

*/

#include<iostream>
#include<vector>
#include<queue>
#include<stack>
#include<string>
#include<cmath>
#include<list>
#include<map>
#include<climits>
using namespace std;

class Heap{
public:
    vector<int> vec; // CBT

    void push(int val){ // O(logn)
        vec.push_back(val);
        
        // fix 
        int x=vec.size()-1;
        int par=(x-1)/2;

        while(par >=0 && vec[x] > vec[par]){  // change the sign and you will get min heap
            swap(vec[x], vec[par]);
            x=par;
            par=(x-1)/2;
        }
    }

    void heapify(int i){

        if(i >=vec.size()){
            return;
        }
        int l=2*i+1;
        int r=2*i+2;

        int maxI=i;
        if(l < vec.size() && vec[l] > vec[maxI]){
            maxI=l;
        }
        if(r < vec.size() && vec[r] > vec[maxI]){
            maxI=r;
        }

        swap(vec[i],vec[maxI]);

        if(maxI != i){
            heapify(maxI);
        }
    }


    void pop(){

        swap(vec[0],vec[vec.size()-1]);

        vec.pop_back();

        heapify(0);

    }


    int top(){
        return vec[0]; // highest priority element
    }

    bool empty(){
        return vec.size()==0;
    }

};

int main(){
    
    Heap h;
    
    h.push(50);
    h.push(10);
    h.push(100);
    
    while(!h.empty()){
        cout<<" top : -> "<<h.top()<<endl;
        h.pop();
    }
    
    

    return 0;
}

