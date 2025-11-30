/* 
  HASH FUNCTION AND HASH TABLE
  ----------------------------

  1. Hash Function:
     - A hash function converts a given key (string, integer, etc.) into a numeric value.
     - This numeric value is then mapped to a valid array index.
     - Formula: index = hash(key) % array_size
     - Example:
         Key = "apple"
         hash("apple") = 12345
         Array size = 10
         Index = 12345 % 10 = 5
         --> "apple" will be stored at index 5

  2. Collision:
     - A collision occurs when two different keys map to the same array index.
     - Example: "apple" and "banana" both map to index 5.
     - Overwriting is not allowed; we must store both key-value pairs.

  3. Chaining Using Linked Lists:
     - Each array index stores a linked list of key-value pairs.
     - When a collision occurs, the new pair is appended to the list.
     - Example:
         Index 5: ("apple", 50) -> ("banana", 100)
     - Searching for a key:
         1. Compute index = hash(key) % array_size
         2. Traverse linked list at that index to find key

  4. Insert Operation:
     Steps to insert a key-value pair:
       1. Compute index = hash(key) % array_size
       2. Go to linked list at array[index]
       3. Check if key exists:
           - If yes, update value
           - If no, append new node
       4. Update current number of elements
     - Time Complexity:
         Average case: O(1)
         Worst case: O(n) if all keys collide

  5. Load Factor and Rehashing:
     - Load factor λ = number of elements / array size
     - High load factor → more collisions → slower operations
     - Rehashing:
         1. Create a new larger array (usually 2× current size)
         2. Recompute index for all existing keys
         3. Insert into new array
         4. Replace old array
     - Effect on Time Complexity:
         Insert/search remains O(1) on average
         Rehashing is O(n) but happens rarely → amortized O(1)

  
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

class Node{
public:
    string key;
    int val;
    Node* next;

    Node(string key, int val){
        this->key = key;
        this->val = val;
        next = NULL;
    }

    ~Node(){
        if(next != NULL){
            delete next;
        }
    }
};

class HashTable{
    int totsize;
    int currsize;
    Node** table;

    int HashFunc(string key){
        int idx = 0;

        for(int i = 0; i < key.size(); i++){
            idx = (idx + (key[i] * key[i])) % totsize;
        }

        return idx%totsize;
    }

    void rehash(){
        Node** oldTable = table;
        int oldsize = totsize;

        totsize = 2 * totsize;
        currsize=0;
        table = new Node*[totsize];

        for(int i = 0; i < totsize; i++){
            table[i] = NULL;
        }

        // Copy old values
        for(int i = 0; i < oldsize; i++){
            Node* temp = oldTable[i];
            while(temp != NULL){
                insert(temp->key, temp->val);
                temp = temp->next;
            }

            if(oldTable[i] != NULL){
                delete oldTable[i];
            }
        }

        delete[] oldTable;
    }

public:
    HashTable(int size){
        totsize = size;
        currsize = 0;

        table = new Node*[totsize];
        for(int i = 0; i < totsize; i++){
            table[i] = NULL;
        }
    }

    ~HashTable(){
        for(int i = 0; i < totsize; i++){
            if(table[i] != NULL){
                delete table[i];
            }
        }
        delete[] table;
    }

    void insert(string key, int val){
        int idx = HashFunc(key);

        Node* newNode = new Node(key, val);
        Node* head = table[idx];

        newNode->next = head;
        table[idx] = newNode; // Fixed: Assign newNode to table[idx] (404)

        currsize++;

        double lambda = currsize / (double)totsize;
        if(lambda > 1){ 
            rehash();
        }
    }

    bool exists(string key){
        int idx = HashFunc(key);

        Node* temp = table[idx];
        while(temp != NULL){
            if(temp->key == key){ // Fixed: Check if temp->key matches the input key (404)
                return true;
            }
            temp = temp->next;
        }

        return false; // Fixed: Return false if key is not found (404)
    }

    int search(string key){
        int idx = HashFunc(key);

        Node* temp = table[idx];
        while(temp != NULL){
            if(temp->key == key){
                return temp->val;
            }
            temp = temp->next;
        }

        return -1; // Return -1 if key is not found
    }

    void remove(string key){
        int idx = HashFunc(key);

        Node* temp = table[idx];
        Node* prev = NULL;

        while(temp != NULL){
            if(temp->key == key){
                if(prev == NULL){
                    table[idx] = temp->next;
                } else {
                    prev->next = temp->next;
                }
                temp->next = NULL;
                delete temp;
                currsize--;
                return;
            }
            prev = temp;
            temp = temp->next;
        }
    }

    void print(){

        for(int i=0;i<totsize;i++){
            cout<<" idx"<<i<<"->";
            Node* temp= table[i];

            while(temp!=NULL){
                cout<<temp->key<<","<<temp->val<<"    --  ";
                temp=temp->next;
            }
            cout<<endl;
        }
    }
};

int main(){
    HashTable ht(5);

    ht.insert("India", 150);
    ht.insert("China", 180);
    ht.insert("USSR", 100);
    ht.insert("USA", 50);
    ht.insert("UAE", 35);
    
    cout<<endl;
    ht.print();
    if(ht.exists("India")){
        cout << "India population -> " << ht.search("India") << endl;
    }

    ht.remove("India");

    if(!ht.exists("India")){
        cout << "India removed from the hash table." << endl;
    }

    return 0;
}