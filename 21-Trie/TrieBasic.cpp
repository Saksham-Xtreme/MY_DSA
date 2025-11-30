/*
----------------------------------------
📒 NOTES on Trie (Prefix Tree) Data Structure
----------------------------------------
1. Trie (also called retrieval tree or prefix tree) is a tree-like data structure 
   used for efficient storage and retrieval of strings, mainly for pattern matching.

2. Key Characteristics:
   - Each node represents a character of a word.
   - Root is an empty node (doesn’t store a character).
   - Each node can have multiple children (for lowercase English letters, max 26 children).
   - A boolean flag `endofword` marks whether a word ends at that node.

3. Operations:
   - Insert:
     Traverse character by character.
     If a child node for a character does not exist, create it.
     After the last character, mark `endofword = true`.
   
   - Search:
     Traverse character by character.
     If at any point the required character does not exist in children → return false.
     If traversal is successful, check `endofword` to confirm full word exists.

4. Time Complexity:
   - Insert: O(L)   [L = length of word]
   - Search: O(L)
   - Space: O(N * L) in worst case (N words, each of length L).

5. Applications:
   - Word dictionary implementation.
   - Spell checkers.
   - Auto-complete systems.
   - IP routing (longest prefix matching).
   - Pattern matching problems.
----------------------------------------
*/

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

int main() {
    vector<string> words = {"the", "a", "there", "their", "any", "thee"};
    
    Trie trie;
    // Insert all words into Trie
    for (int i = 0; i < words.size(); i++) {
        trie.insert(words[i]);
    }

    // Test searches
    cout << trie.search("the") << endl;  // 1 (true)
    cout << trie.search("hey") << endl;  // 0 (false)

    return 0;
}
