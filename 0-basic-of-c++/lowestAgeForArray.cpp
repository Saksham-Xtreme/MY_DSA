#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Ent size of array =";
    cin>>n;
    int ages[n];
    for(int i =0; i<n;i++){
        cout<<"ent ages ";
        cin>>ages[i];
    }

int lowestAge=ages[0];
for(int age : ages){
    if(lowestAge > age ){
        lowestAge=age;
    }
}
cout << "lowest age is = "<<lowestAge <<"\n";

return 0;
}