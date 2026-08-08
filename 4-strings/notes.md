# Strings & Manipulation

## Topic Overview
A string is a sequence of characters. In C++, strings are represented using `std::string` class or character arrays. This section details common operations like concatenation, substring extraction, character frequency counting, checking for palindromes, string compression, and anagram validation.

## Code Files Summary

| File Name | Description | Time Complexity | Space Complexity |
| :--- | :--- | :--- | :--- |
| [Reverse-char-array.cpp](./Reverse-char-array.cpp) | Contains implementation code for `Reverse-char-array`. | $O(N)$ (Inferred) | $O(N)$ (Inferred) |
| [char.cpp](./char.cpp) | Contains implementation code for `char`. | $O(1)$ (Inferred) | $O(N)$ (Inferred) |
| [cstring-func.cpp](./cstring-func.cpp) | Contains implementation code for `cstring-func`. | $O(1)$ (Inferred) | $O(1)$ (Inferred) |
| [longestSubstringPalindrome.cpp](./longestSubstringPalindrome.cpp) | Contains implementation code for `longestSubstringPalindrome`. | $O(N)$ (Inferred) | $O(N)$ (Inferred) |
| [palindorme.cpp](./palindorme.cpp) | Contains implementation code for `palindorme`. | $O(N)$ (Inferred) | $O(N)$ (Inferred) |
| [string.cpp](./string.cpp) | Contains implementation code for `string`. | $O(N^2)$ (Inferred) | $O(1)$ (Inferred) |
| [strings-funcs.cpp](./strings-funcs.cpp) | Contains implementation code for `strings-funcs`. | $O(1)$ (Inferred) | $O(1)$ (Inferred) |
| [upperCase.cpp](./upperCase.cpp) | Contains implementation code for `upperCase`. | $O(N)$ (Inferred) | $O(N)$ (Inferred) |
| [valid_anagram.cpp](./valid_anagram.cpp) | Contains implementation code for `valid_anagram`. | $O(N^2)$ (Inferred) | $O(1)$ (Inferred) |

---

## Detailed Code Explanations

### [Reverse-char-array.cpp](./Reverse-char-array.cpp)
**Description**: Contains implementation code for `Reverse-char-array`.

**Key Functions & Signatures**:
- ` void reverse(char word[],int n) `

**Algorithm / Logic Walkthrough**:
This file sets up inputs and calls operations to demonstrate the solution.

**Complexity Analysis**:
- **Time Complexity**: $O(N)$ (Inferred)
- **Space Complexity**: $O(N)$ (Inferred)

---
### [char.cpp](./char.cpp)
**Description**: Contains implementation code for `char`.

**Algorithm / Logic Walkthrough**:
cin>>input;// take only before space words like "hello bhai" prints hello only

**Complexity Analysis**:
- **Time Complexity**: $O(1)$ (Inferred)
- **Space Complexity**: $O(N)$ (Inferred)

---
### [cstring-func.cpp](./cstring-func.cpp)
**Description**: Contains implementation code for `cstring-func`.

**Algorithm / Logic Walkthrough**:
cstring func str="saksham is best"; error cant do like this strcpy(str,str1); // change one to another use for comparison 0 for equal and if 1st > 2nd +ve value and if 1st < 2nd then a -ve value it goes word by word like a to x and then b to y and then c to z like this

**Complexity Analysis**:
- **Time Complexity**: $O(1)$ (Inferred)
- **Space Complexity**: $O(1)$ (Inferred)

---
### [longestSubstringPalindrome.cpp](./longestSubstringPalindrome.cpp)
**Description**: Contains implementation code for `longestSubstringPalindrome`.

**Key Functions & Signatures**:
- ` string longestPalindrome(string s) `

**Algorithm / Logic Walkthrough**:
This file sets up inputs and calls operations to demonstrate the solution.

**Complexity Analysis**:
- **Time Complexity**: $O(N)$ (Inferred)
- **Space Complexity**: $O(N)$ (Inferred)

---
### [palindorme.cpp](./palindorme.cpp)
**Description**: Contains implementation code for `palindorme`.

**Key Functions & Signatures**:
- ` bool palindrome(char word[],int n) `

**Algorithm / Logic Walkthrough**:
This file sets up inputs and calls operations to demonstrate the solution.

**Complexity Analysis**:
- **Time Complexity**: $O(N)$ (Inferred)
- **Space Complexity**: $O(N)$ (Inferred)

---
### [string.cpp](./string.cpp)
**Description**: Contains implementation code for `string`.

**Algorithm / Logic Walkthrough**:
string in c++ OOPS : class, obj,member func & properties

**Complexity Analysis**:
- **Time Complexity**: $O(N^2)$ (Inferred)
- **Space Complexity**: $O(1)$ (Inferred)

---
### [strings-funcs.cpp](./strings-funcs.cpp)
**Description**: Contains implementation code for `strings-funcs`.

**Algorithm / Logic Walkthrough**:
member funcs

**Complexity Analysis**:
- **Time Complexity**: $O(1)$ (Inferred)
- **Space Complexity**: $O(1)$ (Inferred)

---
### [upperCase.cpp](./upperCase.cpp)
**Description**: Contains implementation code for `upperCase`.

**Key Functions & Signatures**:
- ` void toUpper(char word[],int n) `

**Algorithm / Logic Walkthrough**:
This file sets up inputs and calls operations to demonstrate the solution.

**Complexity Analysis**:
- **Time Complexity**: $O(N)$ (Inferred)
- **Space Complexity**: $O(N)$ (Inferred)

---
### [valid_anagram.cpp](./valid_anagram.cpp)
**Description**: Contains implementation code for `valid_anagram`.

**Key Functions & Signatures**:
- ` bool isana(string str1,string str2) `

**Algorithm / Logic Walkthrough**:
This file sets up inputs and calls operations to demonstrate the solution.

**Complexity Analysis**:
- **Time Complexity**: $O(N^2)$ (Inferred)
- **Space Complexity**: $O(1)$ (Inferred)

---

### Revision Cheat Sheet
- **Palindromes**: Check if a string reads the same backwards using two pointers meeting in the middle: `left` and `right` ($O(N)$ time, $O(1)$ space).
- **Anagrams**: Two strings are anagrams if they have the same character counts. Can be checked using a frequency array of size 26 ($O(N)$ time, $O(1)$ space).
- **String Compression**: Compress `"aabbbccc"` to `"a2b3c3"` in-place or using string builder ($O(N)$ time).