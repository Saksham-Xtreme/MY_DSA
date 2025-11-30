/*
    MAP vs UNORDERED_MAP IN C++
    ---------------------------

    1. Underlying Data Structure:
       - map:
           * Implemented using a Balanced Binary Search Tree (usually Red-Black Tree)
           * Stores elements in a **sorted order** (ascending by default)
       - unordered_map:
           * Implemented using a **hash table**
           * Stores elements in **no particular order** (unordered)

    2. Time Complexity:
       - map:
           * Insertion: O(log n) average & worst-case
           * Search: O(log n)
           * Deletion: O(log n)
       - unordered_map:
           * Insertion: O(1) average, O(n) worst-case (due to collisions and rehashing)
           * Search: O(1) average, O(n) worst-case
           * Deletion: O(1) average, O(n) worst-case

    3. Ordering:
       - map:
           * Maintains **keys in sorted order** (ascending or descending if custom comparator is used)
       - unordered_map:
           * **No order is guaranteed**; elements are distributed based on hash values

    4. Memory Usage:
       - map:
           * Uses less memory compared to hash tables because it only stores tree nodes
       - unordered_map:
           * Uses extra memory for hash table buckets to reduce collisions

    5. Use Cases:
       - map:
           * When you need **sorted data** or need to iterate in order
           * When worst-case time complexity matters (log n guaranteed)
       - unordered_map:
           * When **average O(1) access** is important
           * When ordering of elements is **not required**

    6. Summary Table:

        | Feature             | map (ordered)       | unordered_map (hash table) |
        |--------------------|-------------------|---------------------------|
        | Data structure      | Red-Black Tree    | Hash Table                |
        | Order               | Sorted by key     | Unordered                 |
        | Avg insertion/search| O(log n)          | O(1)                      |
        | Worst insertion/search | O(log n)       | O(n)                      |
        | Memory usage        | Lower             | Higher (buckets + chaining)|
        | Use case            | Ordered traversal | Fast access, no order     |

    Key Points:
    - unordered_map is faster **on average**, but map guarantees **order and O(log n)** operations.
    - Choosing between them depends on whether you need **sorting** or **speed**.
*/

#include<iostream>
#include<vector>
#include<queue>
#include<stack>
#include<string>
#include<cmath>
#include<list>
#include<map>
#include<unordered_map>
#include<climits>
using namespace std;

int main(){
    unordered_map<string, int> m;
    m["India"]=150;
    m["China"]=180;
    m["USA"] = 80;
    m["USSR"]=100;
    m["Nepal"]=16;

    // search in map
    for(pair<string,int> country : m){
        cout<< country.first<<","<<country.second<<endl;
    }
    // m.erase("USA"); to erase
    if(m.count("USA")){
        cout<<"USA EXIST"<<endl;
    } else{
        cout<<"USA not EXIST"<<endl;
    }

    if(m.count("Kenya")){
        cout<<"kenya EXIST"<<endl;
    } else{
        cout<<"kenya not EXIST"<<endl;
    }

    m["Nepal"]=200; // it updates

    return 0;
}