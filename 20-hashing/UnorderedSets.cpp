/*
    ============================
    SET vs UNORDERED_SET NOTES
    ============================

    1. set (ordered set):
       - Implemented using Red-Black Tree (Self-balancing BST).
       - Elements are always sorted (ascending by default).
       - Operations (insert, erase, search): O(log n).
       - No duplicate elements allowed.

    2. unordered_set:
       - Implemented using Hash Table.
       - Elements are NOT stored in order (random order).
       - Operations (insert, erase, search): 
            * Average Case: O(1)
            * Worst Case: O(n) (when many collisions happen).
       - No duplicate elements allowed.

    3. Common Points:
       - Both store only UNIQUE elements.
       - Both support insert, find, erase, size, begin(), end(), etc.

    4. Differences:
       - set: Ordered, log(n) complexity.
       - unordered_set: Unordered, avg O(1) complexity.

    5. Functions in unordered_set:
       - insert(x)   → insert element
       - erase(x)    → remove element if it exists
       - find(x)     → returns iterator pointing to element if found
       - size()      → returns number of elements
       - empty()     → checks if set is empty
       - clear()     → removes all elements
       - count(x)    → returns 1 if element exists, else 0

    6. Example Use Cases:
       - Use `set` when you need ORDERED unique data.
       - Use `unordered_set` when ORDER is not important but FAST lookup is required.

*/

#include<iostream>
#include<unordered_set>
using namespace std;

int main(){
    // Creating an unordered_set
    unordered_set<int> s;

    // Insert elements (all unique)
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);

    // Size of set (number of unique elements)
    cout<< s.size()<<endl;

    // Search for an element (3 exists)
    if(s.find(3) != s.end()){
        cout<<"3 exist"<<endl;
    } else{
        cout<<" not exist "<<endl;
    }

    // Search for an element (10 does not exist)
    if(s.find(10) != s.end()){
        cout<<"10 exist"<<endl;
    } else{
        cout<<"10 not exist "<<endl;
    }

    // Erase an element (delete 3)
    s.erase(3);
    cout<< "3 deleted"<<endl;

    // Print all elements
    // NOTE: Order is NOT guaranteed
    for(auto el : s){
        cout<< el<<" ";
    }
    cout<<endl;

    return 0;
}
