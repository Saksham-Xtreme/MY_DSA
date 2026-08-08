# Bitwise Operators & Bit Manipulation

## Topic Overview
Bit manipulation involves performing operations at the individual bit level using binary representation. This section covers standard bitwise operations (AND `&`, OR `|`, XOR `^`, NOT `~`, Left Shift `<<`, Right Shift `>>`) and common tricks like checking for odd/even, finding/setting/clearing the $i$-th bit, and checking if a number is a power of 2.

## Code Files Summary

| File Name | Description | Time Complexity | Space Complexity |
| :--- | :--- | :--- | :--- |
| [FastExponetial.cpp](./FastExponetial.cpp) | Contains implementation code for `FastExponetial`. | $O(N)$ (Inferred) | $O(1)$ (Inferred) |
| [bit.cpp](./bit.cpp) | Contains implementation code for `bit`. | $O(1)$ (Inferred) | $O(1)$ (Inferred) |
| [checkOddEven.cpp](./checkOddEven.cpp) | Contains implementation code for `checkOddEven`. | $O(1)$ (Inferred) | $O(1)$ (Inferred) |
| [checkPowerOfTwo.cpp](./checkPowerOfTwo.cpp) | Contains implementation code for `checkPowerOfTwo`. | $O(1)$ (Inferred) | $O(1)$ (Inferred) |
| [clear(ith)Bit.cpp](./clear(ith)Bit.cpp) | Contains implementation code for `clear(ith)Bit`. | $O(1)$ (Inferred) | $O(1)$ (Inferred) |
| [clearINumBit.cpp](./clearINumBit.cpp) | Contains implementation code for `clearINumBit`. | $O(1)$ (Inferred) | $O(1)$ (Inferred) |
| [getIthBit.cpp](./getIthBit.cpp) | Contains implementation code for `getIthBit`. | $O(1)$ (Inferred) | $O(1)$ (Inferred) |
| [setIthBit.cpp](./setIthBit.cpp) | Contains implementation code for `setIthBit`. | $O(1)$ (Inferred) | $O(1)$ (Inferred) |
| [sumOfbits.cpp](./sumOfbits.cpp) | Contains implementation code for `sumOfbits`. | $O(N)$ (Inferred) | $O(1)$ (Inferred) |
| [updateIthBit.cpp](./updateIthBit.cpp) | Contains implementation code for `updateIthBit`. | $O(1)$ (Inferred) | $O(1)$ (Inferred) |

---

## Detailed Code Explanations

### [FastExponetial.cpp](./FastExponetial.cpp)
**Description**: Contains implementation code for `FastExponetial`.

**Algorithm / Logic Walkthrough**:
This file sets up inputs and calls operations to demonstrate the solution.

**Complexity Analysis**:
- **Time Complexity**: $O(N)$ (Inferred)
- **Space Complexity**: $O(1)$ (Inferred)

---
### [bit.cpp](./bit.cpp)
**Description**: Contains implementation code for `bit`.

**Algorithm / Logic Walkthrough**:
bitwise and bitwise or bitwise xor but how we know it is -7 msb sign bit 1  = -ve and 0=+ve (1 tell sign)111 1001

**Complexity Analysis**:
- **Time Complexity**: $O(1)$ (Inferred)
- **Space Complexity**: $O(1)$ (Inferred)

---
### [checkOddEven.cpp](./checkOddEven.cpp)
**Description**: Contains implementation code for `checkOddEven`.

**Algorithm / Logic Walkthrough**:
This file sets up inputs and calls operations to demonstrate the solution.

**Complexity Analysis**:
- **Time Complexity**: $O(1)$ (Inferred)
- **Space Complexity**: $O(1)$ (Inferred)

---
### [checkPowerOfTwo.cpp](./checkPowerOfTwo.cpp)
**Description**: Contains implementation code for `checkPowerOfTwo`.

**Algorithm / Logic Walkthrough**:
This file sets up inputs and calls operations to demonstrate the solution.

**Complexity Analysis**:
- **Time Complexity**: $O(1)$ (Inferred)
- **Space Complexity**: $O(1)$ (Inferred)

---
### [clear(ith)Bit.cpp](./clear(ith)Bit.cpp)
**Description**: Contains implementation code for `clear(ith)Bit`.

**Algorithm / Logic Walkthrough**:
This file sets up inputs and calls operations to demonstrate the solution.

**Complexity Analysis**:
- **Time Complexity**: $O(1)$ (Inferred)
- **Space Complexity**: $O(1)$ (Inferred)

---
### [clearINumBit.cpp](./clearINumBit.cpp)
**Description**: Contains implementation code for `clearINumBit`.

**Algorithm / Logic Walkthrough**:
This file sets up inputs and calls operations to demonstrate the solution.

**Complexity Analysis**:
- **Time Complexity**: $O(1)$ (Inferred)
- **Space Complexity**: $O(1)$ (Inferred)

---
### [getIthBit.cpp](./getIthBit.cpp)
**Description**: Contains implementation code for `getIthBit`.

**Algorithm / Logic Walkthrough**:
This file sets up inputs and calls operations to demonstrate the solution.

**Complexity Analysis**:
- **Time Complexity**: $O(1)$ (Inferred)
- **Space Complexity**: $O(1)$ (Inferred)

---
### [setIthBit.cpp](./setIthBit.cpp)
**Description**: Contains implementation code for `setIthBit`.

**Algorithm / Logic Walkthrough**:
This file sets up inputs and calls operations to demonstrate the solution.

**Complexity Analysis**:
- **Time Complexity**: $O(1)$ (Inferred)
- **Space Complexity**: $O(1)$ (Inferred)

---
### [sumOfbits.cpp](./sumOfbits.cpp)
**Description**: Contains implementation code for `sumOfbits`.

**Algorithm / Logic Walkthrough**:
This file sets up inputs and calls operations to demonstrate the solution.

**Complexity Analysis**:
- **Time Complexity**: $O(N)$ (Inferred)
- **Space Complexity**: $O(1)$ (Inferred)

---
### [updateIthBit.cpp](./updateIthBit.cpp)
**Description**: Contains implementation code for `updateIthBit`.

**Algorithm / Logic Walkthrough**:
This file sets up inputs and calls operations to demonstrate the solution.

**Complexity Analysis**:
- **Time Complexity**: $O(1)$ (Inferred)
- **Space Complexity**: $O(1)$ (Inferred)

---

### Revision Cheat Sheet
- **Odd or Even**: `(n & 1) == 0` is even; `(n & 1) == 1` is odd.
- **Get $i$-th Bit**: `(n & (1 << i)) != 0`.
- **Set $i$-th Bit**: `n = n | (1 << i)`.
- **Clear $i$-th Bit**: `n = n & ~(1 << i)`.
- **Check Power of 2**: `(n > 0) && ((n & (n - 1)) == 0)`.