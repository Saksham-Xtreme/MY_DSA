#include<iostream>
#include<vector>
using namespace std;

int main(){
   /* vector<int> vec1(10,-1);
    cout<<vec1.size()<<endl;
    for(int i=0;i<vec1.size();i++){
        cout<<vec1[i]<<" ";
    }
    cout<<endl;
    */
    vector<int>vec={1,2,3,4};
    cout<<"size -> "<<vec.size()<<endl;
    cout<<"capacity -> "<<vec.capacity()<<endl;

    vec.push_back(5);//insert element
    cout<<"size -> "<<vec.size()<<endl;
    cout<<"capacity -> "<<vec.capacity()<<endl;
    vec.pop_back();//delete element
    cout<<"size -> "<<vec.size()<<endl;
    cout<<"capacity -> "<<vec.capacity()<<endl;
    return 0;
}