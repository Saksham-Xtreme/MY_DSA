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

// pair of ticket < from, to>
void printItinerary(unordered_map<string,string> tickets){

    unordered_set<string> to;
    for(pair<string, string> t: tickets){
        to.insert(t.second);
    }

    string start="";
    for(pair<string, string> t: tickets){
        if(to.find(t.first)==to.end()){
            start=t.first;
        }
    }

    // real plan
    cout<<start<<" -> ";
    while(tickets.count(start)){
        cout<<tickets[start]<<" -> ";
        start=tickets[start];
    }

    cout<< "destination\n";

}

int main(){
    unordered_map<string,string> tickets;
    tickets["chennai"]="bengluru";
    tickets["mumbai"]="delhi";
    tickets["goa"]="chennai";
    tickets["delhi"]="goa";

    printItinerary(tickets);
    return 0;
}