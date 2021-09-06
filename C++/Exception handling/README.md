# Exception Handling
- Exception Handling in C++ is a process to handle runtime errors. 
- We perform exception handling so the normal flow of the application can be maintained even after runtime errors.

## Advantage
- It maintains the normal flow of the application.

---

### Types:
#### User Defined
In C++, we use 3 keywords to perform exception handling:

### try:
A try block identifies a block of code for which particular exceptions will be activated. It's followed by one or more catch blocks.
### catch:
A program catches an exception with an exception handler at the place in a program where you want to handle the problem. The catch keyword indicates the catching of an exception.
### throw:
A program throws an exception when a problem shows up. This is done using a throw keyword.

---
#### Pre Defined
```cpp
using<exception>
```
C++ provides a list of standard exceptions defined in <exception> which we can use in our programs

- std::bad_alloc
- std::bad_cast
- std::bad_exception
- std::bad_typeid
- std::logic_error
- std::domain_error
- std::invalid_argument
- std::length_error
- std::out_of_range
- std::runtime_error
- std::runtime_error
- std::range_error
- std::underflow_error