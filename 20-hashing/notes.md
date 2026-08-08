# Hashing & HashMaps / HashSets

## Topic Overview
Hashing is a technique to map keys to values using a hash function, allowing for extremely fast data retrieval. This section details C++ STL containers like `std::unordered_map` (HashMap) and `std::unordered_set` (HashSet) which offer $O(1)$ average time complexity for insertion, deletion, and searching. It also explores building a custom HashMap with chaining (using a linked list array for collision resolution) and standard problems like Majority Element, Valid Anagrams, Union & Intersection, and Subarray Sum Equal to K.

## Code Files Summary

| File Name | Description | Time Complexity | Space Complexity |
| :--- | :--- | :--- | :--- |
| [CountDistinct.cpp](./CountDistinct.cpp) | Contains implementation code for `CountDistinct`. | $O(N)$ (Inferred) | $O(N)$ (Inferred) |
| [HashFuncAndCollision.cpp](./HashFuncAndCollision.cpp) | Contains implementation code for `HashFuncAndCollision`. | $O(N^2)$ (Inferred) | $O(N)$ (Inferred) |
| [Intro.cpp](./Intro.cpp) | Contains implementation code for `Intro`. | $O(1)$ (Inferred) | $O(1)$ (Inferred) |
| [ItirneraryFronTickets.cpp](./ItirneraryFronTickets.cpp) | Contains implementation code for `ItirneraryFronTickets`. | $O(N^2)$ (Inferred) | $O(1)$ (Inferred) |
| [LargestSubarrwithSumZero.cpp](./LargestSubarrwithSumZero.cpp) | Contains implementation code for `LargestSubarrwithSumZero`. | $O(N)$ (Inferred) | $O(N)$ (Inferred) |
| [MajorityElement.cpp](./MajorityElement.cpp) | Contains implementation code for `MajorityElement`. | $O(N^2)$ (Inferred) | $O(N)$ (Inferred) |
| [MapSTL.cpp](./MapSTL.cpp) | Contains implementation code for `MapSTL`. | $O(N)$ (Inferred) | $O(1)$ (Inferred) |
| [PairSum.cpp](./PairSum.cpp) | Contains implementation code for `PairSum`. | $O(N)$ (Inferred) | $O(1)$ (Inferred) |
| [Sets.cpp](./Sets.cpp) | Contains implementation code for `Sets`. | $O(N)$ (Inferred) | $O(1)$ (Inferred) |
| [SubarrSumToK.cpp](./SubarrSumToK.cpp) | Contains implementation code for `SubarrSumToK`. | $O(N)$ (Inferred) | $O(N)$ (Inferred) |
| [UnionAndIntersection.cpp](./UnionAndIntersection.cpp) | Contains implementation code for `UnionAndIntersection`. | $O(N^2)$ (Inferred) | $O(N)$ (Inferred) |
| [UnorderedMapSTL.cpp](./UnorderedMapSTL.cpp) | Contains implementation code for `UnorderedMapSTL`. | $O(N)$ (Inferred) | $O(1)$ (Inferred) |
| [UnorderedSets.cpp](./UnorderedSets.cpp) | Contains implementation code for `UnorderedSets`. | $O(N)$ (Inferred) | $O(1)$ (Inferred) |
| [validAnagram.cpp](./validAnagram.cpp) | Contains implementation code for `validAnagram`. | $O(N^2)$ (Inferred) | $O(1)$ (Inferred) |

---

## Detailed Code Explanations

### [CountDistinct.cpp](./CountDistinct.cpp)
**Description**: Contains implementation code for `CountDistinct`.

**Key Functions & Signatures**:
- ` int countDistinct(vector<int> arr) `

**Algorithm / Logic Walkthrough**:
This file sets up inputs and calls operations to demonstrate the solution.

**Complexity Analysis**:
- **Time Complexity**: $O(N)$ (Inferred)
- **Space Complexity**: $O(N)$ (Inferred)

---
### [HashFuncAndCollision.cpp](./HashFuncAndCollision.cpp)
**Description**: Contains implementation code for `HashFuncAndCollision`.

**Key Functions & Signatures**:
- ` int HashFunc(string key) `
- ` void rehash() `
- ` void insert(string key, int val) `
- ` bool exists(string key) `
- ` int search(string key) `
- ` void remove(string key) `
- ` void print() `

**Algorithm / Logic Walkthrough**:
Copy old values HASH FUNCTION AND HASH TABLE ---------------------------- 1. Hash Function: - A hash function converts a given key (string, integer, etc.) into a numeric value. - This numeric value is then mapped to a valid array index.

**Complexity Analysis**:
- **Time Complexity**: $O(N^2)$ (Inferred)
- **Space Complexity**: $O(N)$ (Inferred)

---
### [Intro.cpp](./Intro.cpp)
**Description**: Contains implementation code for `Intro`.

**Algorithm / Logic Walkthrough**:
Hash Table: - An unordered data structure that stores data in key-value pairs. - Provides average time complexity of O(1) for insertion, search, and deletion. Concept: - Works like an array/vector but each element is accessed using a key instead of an index. - A hash function is used to convert data (key) into a hash value (index).

**Complexity Analysis**:
- **Time Complexity**: $O(1)$ (Inferred)
- **Space Complexity**: $O(1)$ (Inferred)

---
### [ItirneraryFronTickets.cpp](./ItirneraryFronTickets.cpp)
**Description**: Contains implementation code for `ItirneraryFronTickets`.

**Key Functions & Signatures**:
- ` void printItinerary(unordered_map<string,string> tickets) `

**Algorithm / Logic Walkthrough**:
pair of ticket < from, to> real plan

**Complexity Analysis**:
- **Time Complexity**: $O(N^2)$ (Inferred)
- **Space Complexity**: $O(1)$ (Inferred)

---
### [LargestSubarrwithSumZero.cpp](./LargestSubarrwithSumZero.cpp)
**Description**: Contains implementation code for `LargestSubarrwithSumZero`.

**Key Functions & Signatures**:
- ` int largSub(vector<int> arr) `

**Algorithm / Logic Walkthrough**:
This file sets up inputs and calls operations to demonstrate the solution.

**Complexity Analysis**:
- **Time Complexity**: $O(N)$ (Inferred)
- **Space Complexity**: $O(N)$ (Inferred)

---
### [MajorityElement.cpp](./MajorityElement.cpp)
**Description**: Contains implementation code for `MajorityElement`.

**Key Functions & Signatures**:
- ` void majorityEle(vector<int> nums) `

**Algorithm / Logic Walkthrough**:
find elements that appear more than n/3 time

**Complexity Analysis**:
- **Time Complexity**: $O(N^2)$ (Inferred)
- **Space Complexity**: $O(N)$ (Inferred)

---
### [MapSTL.cpp](./MapSTL.cpp)
**Description**: Contains implementation code for `MapSTL`.

**Algorithm / Logic Walkthrough**:
same as unordered but with little chnage that it is sorted on the basis of the key search in map m.erase("USA"); to erase

**Complexity Analysis**:
- **Time Complexity**: $O(N)$ (Inferred)
- **Space Complexity**: $O(1)$ (Inferred)

---
### [PairSum.cpp](./PairSum.cpp)
**Description**: Contains implementation code for `PairSum`.

**Algorithm / Logic Walkthrough**:
LEETCODE wala hai 1. brute force nested loop O(n2) 2. sort ( 2 ptr approach) O(nlogn) 3. using unordered map <arr[i], i>

**Complexity Analysis**:
- **Time Complexity**: $O(N)$ (Inferred)
- **Space Complexity**: $O(1)$ (Inferred)

---
### [Sets.cpp](./Sets.cpp)
**Description**: Contains implementation code for `Sets`.

**Algorithm / Logic Walkthrough**:
This file sets up inputs and calls operations to demonstrate the solution.

**Complexity Analysis**:
- **Time Complexity**: $O(N)$ (Inferred)
- **Space Complexity**: $O(1)$ (Inferred)

---
### [SubarrSumToK.cpp](./SubarrSumToK.cpp)
**Description**: Contains implementation code for `SubarrSumToK`.

**Key Functions & Signatures**:
- ` int SubarrCountK(vector<int> arr, int K){ // sum[i to j]= sum[j]-sum[i]; `

**Algorithm / Logic Walkthrough**:
This file sets up inputs and calls operations to demonstrate the solution.

**Complexity Analysis**:
- **Time Complexity**: $O(N)$ (Inferred)
- **Space Complexity**: $O(N)$ (Inferred)

---
### [UnionAndIntersection.cpp](./UnionAndIntersection.cpp)
**Description**: Contains implementation code for `UnionAndIntersection`.

**Key Functions & Signatures**:
- ` void printUnion(vector<int> arr1, vector<int> arr2) `
- ` void printIntersection(vector<int> arr1, vector<int> arr2) `

**Algorithm / Logic Walkthrough**:
This file sets up inputs and calls operations to demonstrate the solution.

**Complexity Analysis**:
- **Time Complexity**: $O(N^2)$ (Inferred)
- **Space Complexity**: $O(N)$ (Inferred)

---
### [UnorderedMapSTL.cpp](./UnorderedMapSTL.cpp)
**Description**: Contains implementation code for `UnorderedMapSTL`.

**Algorithm / Logic Walkthrough**:
search in map m.erase("USA"); to erase MAP vs UNORDERED_MAP IN C++ --------------------------- 1. Underlying Data Structure: - map:

**Complexity Analysis**:
- **Time Complexity**: $O(N)$ (Inferred)
- **Space Complexity**: $O(1)$ (Inferred)

---
### [UnorderedSets.cpp](./UnorderedSets.cpp)
**Description**: Contains implementation code for `UnorderedSets`.

**Algorithm / Logic Walkthrough**:
Creating an unordered_set Insert elements (all unique) Size of set (number of unique elements) Search for an element (3 exists) Search for an element (10 does not exist) Erase an element (delete 3)

**Complexity Analysis**:
- **Time Complexity**: $O(N)$ (Inferred)
- **Space Complexity**: $O(1)$ (Inferred)

---
### [validAnagram.cpp](./validAnagram.cpp)
**Description**: Contains implementation code for `validAnagram`.

**Key Functions & Signatures**:
- ` bool ValidAna(string s, string t) `

**Algorithm / Logic Walkthrough**:
now we will compare

**Complexity Analysis**:
- **Time Complexity**: $O(N^2)$ (Inferred)
- **Space Complexity**: $O(1)$ (Inferred)

---

### Revision Cheat Sheet
- **Complexities**: `unordered_map` has $O(1)$ average and $O(N)$ worst-case time (due to collisions). `map` (self-balancing BST) has $O(\log N)$ time always.
- **Subarray Sum Equal to K**: Use a prefix sum hash map storing frequencies of prefix sums. If `prefixSum - k` exists in the map, add its frequency to the count ($O(N)$ time).