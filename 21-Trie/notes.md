# Trie (Prefix Tree)

## Topic Overview
A Trie (or Prefix Tree) is an efficient information retrieval data structure used to store a dynamic set of strings. It is particularly useful for prefix search, autocomplete, and dictionary implementations. Each node contains an array of pointers to child nodes (representing characters) and a boolean flag indicating if the node represents the end of a word.

## Code Files Summary

| File Name | Description | Time Complexity | Space Complexity |
| :--- | :--- | :--- | :--- |
| [CountUniqueSubstr.cpp](./CountUniqueSubstr.cpp) | Contains implementation code for `CountUniqueSubstr`. | $O(N^2)$ (Inferred) | $O(N)$ (Inferred) |
| [PrefixProblem.cpp](./PrefixProblem.cpp) | Contains implementation code for `PrefixProblem`. | $O(N^2)$ (Inferred) | $O(N)$ (Inferred) |
| [StartsWithProb.cpp](./StartsWithProb.cpp) | Contains implementation code for `StartsWithProb`. | $O(N^2)$ (Inferred) | $O(N)$ (Inferred) |
| [TrieBasic.cpp](./TrieBasic.cpp) | Contains implementation code for `TrieBasic`. | $O(1)$ (Inferred) | $O(N)$ (Inferred) |
| [WordBreakProblem.cpp](./WordBreakProblem.cpp) | Contains implementation code for `WordBreakProblem`. | $O(N^2)$ (Inferred) | $O(N)$ (Inferred) |
| [longestString.cpp](./longestString.cpp) | Contains implementation code for `longestString`. | $O(N^2)$ (Inferred) | $O(N)$ (Inferred) |

---

## Detailed Code Explanations

### [CountUniqueSubstr.cpp](./CountUniqueSubstr.cpp)
**Description**: Contains implementation code for `CountUniqueSubstr`.

**Key Functions & Signatures**:
- ` void insert(string key) `
- ` bool search(string key) `
- ` string getPrefix(string key) `
- ` int countHelper(Node* root) `
- ` int countNode() `
- ` int countUniqueSubstr(string str) `

**Algorithm / Logic Walkthrough**:
if character is not present, create a new node move to the child node mark end of word Search a word in the Trie if character is present, move ahead if character not found → word not present

**Complexity Analysis**:
- **Time Complexity**: $O(N^2)$ (Inferred)
- **Space Complexity**: $O(N)$ (Inferred)

---
### [PrefixProblem.cpp](./PrefixProblem.cpp)
**Description**: Contains implementation code for `PrefixProblem`.

**Key Functions & Signatures**:
- ` void insert(string key) `
- ` bool search(string key) `
- ` string getPrefix(string key) `
- ` void prefixPro(vector<string> dict) `

**Algorithm / Logic Walkthrough**:
if character is not present, create a new node move to the child node mark end of word Search a word in the Trie if character is present, move ahead if character not found → word not present

**Complexity Analysis**:
- **Time Complexity**: $O(N^2)$ (Inferred)
- **Space Complexity**: $O(N)$ (Inferred)

---
### [StartsWithProb.cpp](./StartsWithProb.cpp)
**Description**: Contains implementation code for `StartsWithProb`.

**Key Functions & Signatures**:
- ` void insert(string key) `
- ` bool search(string key) `
- ` bool startswith(string prefix) `

**Algorithm / Logic Walkthrough**:
if character is not present, create a new node move to the child node mark end of word Search a word in the Trie if character is present, move ahead if character not found → word not present

**Complexity Analysis**:
- **Time Complexity**: $O(N^2)$ (Inferred)
- **Space Complexity**: $O(N)$ (Inferred)

---
### [TrieBasic.cpp](./TrieBasic.cpp)
**Description**: Contains implementation code for `TrieBasic`.

**Key Functions & Signatures**:
- ` void insert(string key) `
- ` bool search(string key) `

**Algorithm / Logic Walkthrough**:
Node of Trie Trie class Insert a word into the Trie if character is not present, create a new node move to the child node mark end of word

**Complexity Analysis**:
- **Time Complexity**: $O(1)$ (Inferred)
- **Space Complexity**: $O(N)$ (Inferred)

---
### [WordBreakProblem.cpp](./WordBreakProblem.cpp)
**Description**: Contains implementation code for `WordBreakProblem`.

**Key Functions & Signatures**:
- ` void insert(string key) `
- ` bool search(string key) `
- ` bool helper(Trie &trie, string key) `
- ` bool wordBreak(vector<string> dict,string key) `

**Algorithm / Logic Walkthrough**:
Node of Trie Trie class Insert a word into the Trie if character is not present, create a new node move to the child node mark end of word

**Complexity Analysis**:
- **Time Complexity**: $O(N^2)$ (Inferred)
- **Space Complexity**: $O(N)$ (Inferred)

---
### [longestString.cpp](./longestString.cpp)
**Description**: Contains implementation code for `longestString`.

**Key Functions & Signatures**:
- ` void insert(string key) `
- ` bool search(string key) `
- ` bool startswith(string prefix) `
- ` void longestHelp(Node* root, string &ans, string temp) `
- ` string longesSubWith() `
- ` string longestString(vector<string> dict) `

**Algorithm / Logic Walkthrough**:
if character is not present, create a new node move to the child node mark end of word Search a word in the Trie if character is present, move ahead if character not found → word not present

**Complexity Analysis**:
- **Time Complexity**: $O(N^2)$ (Inferred)
- **Space Complexity**: $O(N)$ (Inferred)

---

### Revision Cheat Sheet
- **Node Structure**:
  ```cpp
  struct Node {
      Node* children[26];
      bool isWordEnd;
  };
  ```
- **Operations**: Insertion, search, and prefix check take $O(L)$ time, where $L$ is the length of the word, independent of the number of words in the Trie.
- **Space**: High memory requirement compared to HashMaps due to pointer overhead.