# 📘 C++ POINTERS – COMPLETE README

This document covers all important pointer-related concepts in C++ including
basic pointers, arrays of pointers, dynamic memory, void pointers, references,
function pointers, and the `this` pointer.  
Perfect for exam, viva, and interview revision.

---

## 🔹 1. Pointer (Basic)

### 📌 Concept
A pointer is a variable that stores the memory address of another variable.

### 📌 Syntax
```cpp
int x = 10;
int *p = &x;
📌 Key Points
p stores address of x

*p gives the value stored at that address

Used for dynamic memory and call-by-reference

📌 Formula

*p → value  
&p → address
🔹 2. Array of Pointers
📌 Concept
An array that stores multiple pointer variables.

📌 Syntax

int *arr[3];
📌 Use
Each element of the array can point to different memory blocks.

📌 Example Use
Used in dynamic 2D arrays and string arrays.

🔹 3. Dynamic Memory with Pointers

📌 1D Dynamic Array

int *p = new int[n];
📌 2D Dynamic Array

int **p = new int*[rows];
for(int i=0; i<rows; i++)
    p[i] = new int[cols];
📌 Key Point
Memory allocated in Heap at runtime

Must be freed using delete[]

🔹 4. Void Pointer
📌 Concept
A generic pointer that can store the address of any data type.

📌 Syntax

void *ptr;
📌 Rules
Cannot be directly dereferenced

Must be typecast before use

📌 Example

ptr = &a;
cout << *(int*)ptr;
📌 Use
Used in malloc(), calloc() and generic programming.

🔹 5. Reference

📌 Concept
A reference is an alias (another name) for an existing variable.

📌 Syntax

int &ref = x;

📌 Rules

Must be initialized at declaration

Cannot be changed to refer another variable

No dereference operator needed

📌 Use

Passing arguments by reference

Avoids copying large data

Enables method chaining

🔹 6. Reference to a Pointer
📌 Concept
A reference that refers to a pointer variable.

📌 Syntax

int *p;
int* &refPtr = p;
📌 Use
Allows modifying pointer itself inside functions.

🔹 7. Function Pointer
📌 Concept
A pointer that stores the address of a function.

📌 Syntax

int (*fp)(int,int);
fp = multiply;

📌 Call Function
fp(5,4);

📌 Use

Callback functions

Passing functions as arguments

Flexible program design

🔹 8. this Pointer

📌 Concept
An implicit pointer inside non-static class functions that points to the current object.

📌 Example

this->age = age;
📌 Method Chaining

Student& func() {
   return *this;
}
📌 Use
Resolve name conflicts

Return current object

Enable chaining

🔹 9. Pointer vs Reference

| Feature            | Pointer          | Reference       |
|--------------------|------------------|-----------------|
| Stores address     | Yes              | No (alias)      |
| Can be NULL       | Yes              | No              |
| Needs dereference | Yes (*p)         | No              |
| Can be reassigned | Yes              | No              |



🔹 10. Memory Areas

| Area  | Used For                     |
|-------|------------------------------|
| Stack | Normal variables             |
| Heap  | Dynamic memory (new)         |