# Object-Oriented Programming (OOPs)

## Topic Overview
Object-Oriented Programming is a programming paradigm based on the concept of 'objects', which can contain data and code. This folder details classes, objects, access specifiers (`public`, `private`, `protected`), constructors (default, parameterized, copy), destructors, and the four pillars of OOPs:
1. **Encapsulation**: Binding data and functions together.
2. **Abstraction**: Hiding internal implementation details.
3. **Inheritance**: Deriving properties of a parent class into a child class.
4. **Polymorphism**: Compile-time (method overloading, operator overloading) and Runtime (method overriding using virtual functions).

## Code Files Summary

| File Name | Description | Time Complexity | Space Complexity |
| :--- | :--- | :--- | :--- |
| [Abstraction.cpp](./Abstraction.cpp) | Contains implementation code for `Abstraction`. | $O(1)$ (Inferred) | $O(1)$ (Inferred) |
| [FriendClass.cpp](./FriendClass.cpp) | Contains implementation code for `FriendClass`. | $O(1)$ (Inferred) | $O(1)$ (Inferred) |
| [Inheritance.cpp](./Inheritance.cpp) | Contains implementation code for `Inheritance`. | $O(1)$ (Inferred) | $O(1)$ (Inferred) |
| [Polymorphism.cpp](./Polymorphism.cpp) | Contains implementation code for `Polymorphism`. | $O(1)$ (Inferred) | $O(1)$ (Inferred) |
| [PracticeQuest.cpp](./PracticeQuest.cpp) | Contains implementation code for `PracticeQuest`. | $O(1)$ (Inferred) | $O(1)$ (Inferred) |
| [RunTimePolyMor.cpp](./RunTimePolyMor.cpp) | Contains implementation code for `RunTimePolyMor`. | $O(1)$ (Inferred) | $O(1)$ (Inferred) |
| [accessModifier.cpp](./accessModifier.cpp) | Contains implementation code for `accessModifier`. | $O(1)$ (Inferred) | $O(1)$ (Inferred) |
| [assignmentOne.cpp](./assignmentOne.cpp) | Contains implementation code for `assignmentOne`. | $O(1)$ (Inferred) | $O(1)$ (Inferred) |
| [complieTimePolymor.cpp](./complieTimePolymor.cpp) | Contains implementation code for `complieTimePolymor`. | $O(1)$ (Inferred) | $O(1)$ (Inferred) |
| [constructors.cpp](./constructors.cpp) | Contains implementation code for `constructors`. | $O(1)$ (Inferred) | $O(1)$ (Inferred) |
| [copyConstructor.cpp](./copyConstructor.cpp) | Contains implementation code for `copyConstructor`. | $O(1)$ (Inferred) | $O(N)$ (Inferred) |
| [destructor.cpp](./destructor.cpp) | Contains implementation code for `destructor`. | $O(1)$ (Inferred) | $O(N)$ (Inferred) |
| [encapsulation.cpp](./encapsulation.cpp) | Contains implementation code for `encapsulation`. | $O(1)$ (Inferred) | $O(1)$ (Inferred) |
| [first.cpp](./first.cpp) | Contains implementation code for `first`. | $O(1)$ (Inferred) | $O(1)$ (Inferred) |
| [gettersAndSetters.cpp](./gettersAndSetters.cpp) | Contains implementation code for `gettersAndSetters`. | $O(1)$ (Inferred) | $O(1)$ (Inferred) |
| [multipleInheritance.cpp](./multipleInheritance.cpp) | Contains implementation code for `multipleInheritance`. | $O(1)$ (Inferred) | $O(1)$ (Inferred) |
| [shallowAndDeepCopy.cpp](./shallowAndDeepCopy.cpp) | Contains implementation code for `shallowAndDeepCopy`. | $O(1)$ (Inferred) | $O(N)$ (Inferred) |
| [statickeyword.cpp](./statickeyword.cpp) | Contains implementation code for `statickeyword`. | $O(1)$ (Inferred) | $O(1)$ (Inferred) |
| [typeOfInheritence.cpp](./typeOfInheritence.cpp) | Contains implementation code for `typeOfInheritence`. | $O(1)$ (Inferred) | $O(1)$ (Inferred) |

---

## Detailed Code Explanations

### [Abstraction.cpp](./Abstraction.cpp)
**Description**: Contains implementation code for `Abstraction`.

**Key Functions & Signatures**:
- ` void draw() `

**Algorithm / Logic Walkthrough**:
Abstract class Hiding all uneccesary detail & showing imp part using access modifier is also a part of abstarction and more are 1. Abstract Classes and virtual func 1. in abstract class we do not create obj it only use to inherited and give blueprint to child class

**Complexity Analysis**:
- **Time Complexity**: $O(1)$ (Inferred)
- **Space Complexity**: $O(1)$ (Inferred)

---
### [FriendClass.cpp](./FriendClass.cpp)
**Description**: Contains implementation code for `FriendClass`.

**Key Functions & Signatures**:
- ` void ShowSecret(A &obj) `

**Algorithm / Logic Walkthrough**:
This file sets up inputs and calls operations to demonstrate the solution.

**Complexity Analysis**:
- **Time Complexity**: $O(1)$ (Inferred)
- **Space Complexity**: $O(1)$ (Inferred)

---
### [Inheritance.cpp](./Inheritance.cpp)
**Description**: Contains implementation code for `Inheritance`.

**Key Functions & Signatures**:
- ` void eats() `
- ` void breathe() `
- ` void swim() `

**Algorithm / Logic Walkthrough**:
when properties and member func of base/parent/ super class are passed on the derived/sub/child class. class A --->>> Class B it happens for code reusabilty Mode of Inheritance

**Complexity Analysis**:
- **Time Complexity**: $O(1)$ (Inferred)
- **Space Complexity**: $O(1)$ (Inferred)

---
### [Polymorphism.cpp](./Polymorphism.cpp)
**Description**: Contains implementation code for `Polymorphism`.

**Algorithm / Logic Walkthrough**:
polymorphism is the ability of obj to take on diff form or behave in diff ways depending in the context in whch they are used ex. car(),car(name,color),car(name) there are two type:

**Complexity Analysis**:
- **Time Complexity**: $O(1)$ (Inferred)
- **Space Complexity**: $O(1)$ (Inferred)

---
### [PracticeQuest.cpp](./PracticeQuest.cpp)
**Description**: Contains implementation code for `PracticeQuest`.

**Key Functions & Signatures**:
- ` string getPass() `
- ` void setPass(string password) `

**Algorithm / Logic Walkthrough**:
Getter create a user class with properties id,password(pvt) & username(public); it should have getter and setter for password

**Complexity Analysis**:
- **Time Complexity**: $O(1)$ (Inferred)
- **Space Complexity**: $O(1)$ (Inferred)

---
### [RunTimePolyMor.cpp](./RunTimePolyMor.cpp)
**Description**: Contains implementation code for `RunTimePolyMor`.

**Key Functions & Signatures**:
- ` void show() `
- ` virtual void hello() `
- ` void hello() `

**Algorithm / Logic Walkthrough**:
func overriding-> (p & c)both classes have same name func Child class func >>>> inheritance virtual func:-> a virtual func is a mem func that u expect to be redifined in derived class 1. dynamic in natue

**Complexity Analysis**:
- **Time Complexity**: $O(1)$ (Inferred)
- **Space Complexity**: $O(1)$ (Inferred)

---
### [accessModifier.cpp](./accessModifier.cpp)
**Description**: Contains implementation code for `accessModifier`.

**Key Functions & Signatures**:
- ` void getPercentage( ) `

**Algorithm / Logic Walkthrough**:
by default it is pvt Properties methods diff btw private and protected is that pvt can be access only inside the class but protected can be access inside class

**Complexity Analysis**:
- **Time Complexity**: $O(1)$ (Inferred)
- **Space Complexity**: $O(1)$ (Inferred)

---
### [assignmentOne.cpp](./assignmentOne.cpp)
**Description**: Contains implementation code for `assignmentOne`.

**Key Functions & Signatures**:
- ` void deposit(float depAmt) `
- ` void withdraw(float withAmt) `
- ` void getBalance() `

**Algorithm / Logic Walkthrough**:
Create a class Bank Account with private attributes accountNumber and balance. Implement public methods deposit(),withdraw(),and getBalance() to manage the account.

**Complexity Analysis**:
- **Time Complexity**: $O(1)$ (Inferred)
- **Space Complexity**: $O(1)$ (Inferred)

---
### [complieTimePolymor.cpp](./complieTimePolymor.cpp)
**Description**: Contains implementation code for `complieTimePolymor`.

**Key Functions & Signatures**:
- ` void show(int x) `
- ` void show(string s) `
- ` void showNum() `

**Algorithm / Logic Walkthrough**:
function overloading same name func diff parameter opreator overloading opreator overloading

**Complexity Analysis**:
- **Time Complexity**: $O(1)$ (Inferred)
- **Space Complexity**: $O(1)$ (Inferred)

---
### [constructors.cpp](./constructors.cpp)
**Description**: Contains implementation code for `constructors`.

**Key Functions & Signatures**:
- ` void start() `
- ` void stop() `
- ` string getname() `
- ` string getcolor() `

**Algorithm / Logic Walkthrough**:
special method; use to not to access dircetly; getter to see output it is a special method which invoked automatically at time of object creation. used for instialisation.

**Complexity Analysis**:
- **Time Complexity**: $O(1)$ (Inferred)
- **Space Complexity**: $O(1)$ (Inferred)

---
### [copyConstructor.cpp](./copyConstructor.cpp)
**Description**: Contains implementation code for `copyConstructor`.

**Algorithm / Logic Walkthrough**:
Special Constructor (default) used to copy properties of one obj into another.

**Complexity Analysis**:
- **Time Complexity**: $O(1)$ (Inferred)
- **Space Complexity**: $O(N)$ (Inferred)

---
### [destructor.cpp](./destructor.cpp)
**Description**: Contains implementation code for `destructor`.

**Algorithm / Logic Walkthrough**:
destructor is mostly self built but when there is any dynamic memory allocation then we explicitly delete it.

**Complexity Analysis**:
- **Time Complexity**: $O(1)$ (Inferred)
- **Space Complexity**: $O(N)$ (Inferred)

---
### [encapsulation.cpp](./encapsulation.cpp)
**Description**: Contains implementation code for `encapsulation`.

**Algorithm / Logic Walkthrough**:
it is wrapping up of data & member funcs(methods) in a single unit. it also implements data hiding using access modifier like which i want to hide i make it pvt and want to show i will make it public

**Complexity Analysis**:
- **Time Complexity**: $O(1)$ (Inferred)
- **Space Complexity**: $O(1)$ (Inferred)

---
### [first.cpp](./first.cpp)
**Description**: Contains implementation code for `first`.

**Key Functions & Signatures**:
- ` void getPercentage( ) `
- ` void deactivate() `
- ` void editbio(string newbio) `

**Algorithm / Logic Walkthrough**:
Properties methods class User{ int id; string username; string password;

**Complexity Analysis**:
- **Time Complexity**: $O(1)$ (Inferred)
- **Space Complexity**: $O(1)$ (Inferred)

---
### [gettersAndSetters.cpp](./gettersAndSetters.cpp)
**Description**: Contains implementation code for `gettersAndSetters`.

**Key Functions & Signatures**:
- ` void getPercentage( ) `
- ` void setName(string nameval) `
- ` void setcgpa(float cgpaval) `
- ` string getName() `
- ` float getcgpa() `

**Algorithm / Logic Walkthrough**:
special method; use to not to access dircetly; they are pvt here setters to set or input getters to return or output input

**Complexity Analysis**:
- **Time Complexity**: $O(1)$ (Inferred)
- **Space Complexity**: $O(1)$ (Inferred)

---
### [multipleInheritance.cpp](./multipleInheritance.cpp)
**Description**: Contains implementation code for `multipleInheritance`.

**Algorithm / Logic Walkthrough**:
This file sets up inputs and calls operations to demonstrate the solution.

**Complexity Analysis**:
- **Time Complexity**: $O(1)$ (Inferred)
- **Space Complexity**: $O(1)$ (Inferred)

---
### [shallowAndDeepCopy.cpp](./shallowAndDeepCopy.cpp)
**Description**: Contains implementation code for `shallowAndDeepCopy`.

**Algorithm / Logic Walkthrough**:
shallow copy copies refrence to original array but array remain same Deep copy created  a brand new copy of the array as we have not deleted milage as it was dynamiclly allocated

**Complexity Analysis**:
- **Time Complexity**: $O(1)$ (Inferred)
- **Space Complexity**: $O(N)$ (Inferred)

---
### [statickeyword.cpp](./statickeyword.cpp)
**Description**: Contains implementation code for `statickeyword`.

**Key Functions & Signatures**:
- ` void counter() `

**Algorithm / Logic Walkthrough**:
in func in class we set like this for static var which is increasing static object static keyword it holds the value after func is called from memory then also

**Complexity Analysis**:
- **Time Complexity**: $O(1)$ (Inferred)
- **Space Complexity**: $O(1)$ (Inferred)

---
### [typeOfInheritence.cpp](./typeOfInheritence.cpp)
**Description**: Contains implementation code for `typeOfInheritence`.

**Key Functions & Signatures**:
- ` void eat() `
- ` void breathe() `
- ` void tail() `

**Algorithm / Logic Walkthrough**:
1.single inheritance base class derived class 2. Multi-Level inheritance base class | 1

**Complexity Analysis**:
- **Time Complexity**: $O(1)$ (Inferred)
- **Space Complexity**: $O(1)$ (Inferred)

---

### Revision Cheat Sheet
- **Shallow vs Deep Copy**: Shallow copy copies member values directly (leads to pointer issues). Deep copy allocates new memory and copies the actual values.
- **Virtual Keyword**: `virtual void func()` ensures that the overridden function in the derived class is called at runtime (Dynamic Binding).