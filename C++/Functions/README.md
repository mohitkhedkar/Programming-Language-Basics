# Functions

- code reusability 
- code optimization

- Functions are the block of code performing the unit task
- functions has a name, return type and arguments.
- functions is a way to achieve modularizations
- predefined functions are declared in header files and defined in library files
- Types 
    - Predefined & user-defined
```cpp
void fun(){
    cout<<"Hello world";
}
```

- function declaration or function prototype -> return type of function i.e int ,void,
- types of functions
    - call by value
    - call by address
    - call by reference

| call by value       | call by reference  |
| -------------       |:-------------:     | 
| a copy of value is passed      | an address of value is passed to the function | 
| changes made inside the function is not reflected on other functions| changes are mafe inside the function is reflected outside the function also | 
| actual and formal arguments will be created in different memory location | actual and formal arguments will be created in same memory location | 

- inline function
    - to eliminate the cost of calls to small functions, inline functions are used
    - an inline function is a function that is expanded in line when it is invoked
    - compiler replaces the function call with corresponding function code
```cpp
#include<iostream.h>
inline void fun();
void main(){
    cout<<"your in main function";
    fun();
}

void fun(){
    cout<<"you are in inline function";

}
```


### Benefits
- Easy to read
- easy to modify
- avoids rewriting of code
- easy to debug
- better memory utlization 
---
### friend Function
- if defined as a friend function then the protected and private data of a class can be accessed using the function
- by using the keyword `friend` complier knowns the given function is a friend function
- for accessing the data, the declaration of the friend function should be done inside the body of a class starting with the keyword friend.
```cpp 
class class_name{
    friend data_type function_name(arguments);

};
``` 
###### Characteristics of a Friend function:
    - The function is not in the scope of the class to which it has been declared as a friend.
    - It cannot be called using the object as it is not in the scope of that class.
    - It can be invoked like a normal function without using the object.
    - It cannot access the member names directly and has to use an object name and dot membership operator with the member name.
    - It can be declared either in the private or the public part.

---
### Virtual function
- A C++ virtual function is a member function in the base class that you redefine in a derived class. It is declared using the virtual keyword.
- It is used to tell the compiler to perform dynamic linkage or late binding on the function.
- There is a necessity to use the single pointer to refer to all the objects of the different classes. So, we create the pointer to the base class that refers to all the derived objects. But, when base class pointer contains the address of the derived class object, always executes the base class function. This issue can only be resolved by using the 'virtual' function.
- A `virtual` is a keyword preceding the normal declaration of a function.
- When the function is made virtual, C++ determines which function is to be invoked at the runtime based on the type of the object pointed by the base class pointer.

Rules of Virtual Function

    Virtual functions must be members of some class.
    Virtual functions cannot be static members.
    They are accessed through object pointers.
    They can be a friend of another class.
    A virtual function must be defined in the base class, even though it is not used.
    The prototypes of a virtual function of the base class and all the derived classes must be identical. If the two functions with the same name but different prototypes, C++ will consider them as the overloaded functions.
    We cannot have a virtual constructor, but we can have a virtual destructor

    ---
### function overriding
- if the derived class defines same function as defined in its base class, its known as function overriding in cpp.
- used to achieve the run time polymorphism.


