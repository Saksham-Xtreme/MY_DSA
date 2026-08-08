# Vectors (Dynamic Arrays)

## Topic Overview
Vectors are sequence containers representing arrays that can change in size dynamically. They are part of the C++ Standard Template Library (STL). This section covers vector declaration, memory allocation mechanics (capacity vs. size), and common STL methods (`push_back`, `pop_back`, `size`, `capacity`, `clear`).

## Code Files Summary

| File Name | Description | Time Complexity | Space Complexity |
| :--- | :--- | :--- | :--- |
| [2d-vector.cpp](./2d-vector.cpp) | Contains implementation code for `2d-vector`. | $O(N^2)$ (Inferred) | $O(N)$ (Inferred) |
| [2dDynamicArray.cpp](./2dDynamicArray.cpp) | Contains implementation code for `2dDynamicArray`. | $O(N^2)$ (Inferred) | $O(N)$ (Inferred) |
| [PairSum.cpp](./PairSum.cpp) | Contains implementation code for `PairSum`. | $O(N)$ (Inferred) | $O(N)$ (Inferred) |
| [dynamicMemoryAllocation.cpp](./dynamicMemoryAllocation.cpp) | Contains implementation code for `dynamicMemoryAllocation`. | $O(N^2)$ (Inferred) | $O(N)$ (Inferred) |
| [vectors.cpp](./vectors.cpp) | Contains implementation code for `vectors`. | $O(N)$ (Inferred) | $O(N)$ (Inferred) |

---

## Detailed Code Explanations

### [2d-vector.cpp](./2d-vector.cpp)
**Description**: Contains implementation code for `2d-vector`.

**Algorithm / Logic Walkthrough**:
This file sets up inputs and calls operations to demonstrate the solution.

**Complexity Analysis**:
- **Time Complexity**: $O(N^2)$ (Inferred)
- **Space Complexity**: $O(N)$ (Inferred)

---
### [2dDynamicArray.cpp](./2dDynamicArray.cpp)
**Description**: Contains implementation code for `2dDynamicArray`.

**Algorithm / Logic Walkthrough**:
data storing

**Complexity Analysis**:
- **Time Complexity**: $O(N^2)$ (Inferred)
- **Space Complexity**: $O(N)$ (Inferred)

---
### [PairSum.cpp](./PairSum.cpp)
**Description**: Contains implementation code for `PairSum`.

**Key Functions & Signatures**:
- ` vector<int> pairSum(vector<int> arr,int target) `

**Algorithm / Logic Walkthrough**:
This file sets up inputs and calls operations to demonstrate the solution.

**Complexity Analysis**:
- **Time Complexity**: $O(N)$ (Inferred)
- **Space Complexity**: $O(N)$ (Inferred)

---
### [dynamicMemoryAllocation.cpp](./dynamicMemoryAllocation.cpp)
**Description**: Contains implementation code for `dynamicMemoryAllocation`.

**Key Functions & Signatures**:
- ` void func() `

**Algorithm / Logic Walkthrough**:
int size; cin>>size; int arr=new int[size]; int x=1; for(int i=0;i<size;i++){ arr[i]=x;

**Complexity Analysis**:
- **Time Complexity**: $O(N^2)$ (Inferred)
- **Space Complexity**: $O(N)$ (Inferred)

---
### [vectors.cpp](./vectors.cpp)
**Description**: Contains implementation code for `vectors`.

**Algorithm / Logic Walkthrough**:
vector<int> vec1(10,-1); cout<<vec1.size()<<endl; for(int i=0;i<vec1.size();i++){ cout<<vec1[i]<<" "; cout<<endl;

**Complexity Analysis**:
- **Time Complexity**: $O(N)$ (Inferred)
- **Space Complexity**: $O(N)$ (Inferred)

---

### Revision Cheat Sheet
- **Dynamic Resizing**: When a vector runs out of capacity, it automatically doubles its size ($O(N)$ copy operations). The amortized cost of inserting an element at the end is still $O(1)$.
- **Vector vs Array**: Vector stores size and capacity on the stack, but the actual elements are allocated on the heap dynamically.