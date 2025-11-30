#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

// Node of Trie
class Node {
public:
    unordered_map<char, Node*> child;  // mapping from character → child node
    bool endofword;  // true if this node represents end of a word

    Node() {
        endofword = false;
    }
};

// Trie class
class Trie {
    Node* root;  // root node of the Trie

public:
    Trie() {
        root = new Node();  // initialize empty root
    }

    // Insert a word into the Trie
    void insert(string key) {
        Node* temp = root;

        for (int i = 0; i < key.size(); i++) {
            // if character is not present, create a new node
            if (temp->child.count(key[i]) == 0) {
                temp->child[key[i]] = new Node();
            }
            // move to the child node
            temp = temp->child[key[i]];
        }
        // mark end of word
        temp->endofword = true;
    }

    // Search a word in the Trie
    bool search(string key) {
        Node* temp = root;
        for (int i = 0; i < key.size(); i++) {
            // if character is present, move ahead
            if (temp->child.count(key[i])) {
                temp = temp->child[key[i]];
            } else {
                // if character not found → word not present
                return false;
            }
        }
        // return true only if it's the end of a valid word
        return temp->endofword;
    }
};

bool helper(Trie &trie, string key){
    if(key.size()==0){
        return true;
    }
    
    for(int i=0;i<key.size();i++){

        
        string first=key.substr(0,i+1);
        string second=key.substr(i+1);

        if(trie.search(first) && helper(trie, second)){
            return true;
        }
    }
    return false;
}


bool wordBreak(vector<string> dict,string key){
    Trie trie;
    for(int i=0;i<dict.size();i++){
        trie.insert(dict[i]);
    }

    return helper(trie, key);
}

int main(){
    vector<string> dict={"i","like","sam","samsung", "mobile","ice"};
    cout<< wordBreak(dict,"ilikesamsung")<<endl;

    return 0;
}