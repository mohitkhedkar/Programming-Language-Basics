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
