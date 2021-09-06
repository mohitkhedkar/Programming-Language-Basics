# Templates
- A C++ template is a powerful feature added to C++. 
- It allows you to define the generic classes and generic functions and thus provides support for generic programming.
- Generic programming is a technique where generic types are used as parameters in algorithms so that they can work for a variety of data types.

## Types of Templates
- Function Templates
- Class Templates

---

### Function Template
- Generic functions use the concept of a function template. Generic functions define a set of operations that can be applied to the various types of data.
- The type of the data that the function will operate on depends on the type of the data passed as a parameter.
- Generic function is created by using the keyword template. The template defines what function will do.
```cpp
// Syntax for function template
template <class tType> return_type func_name(paramters){
    // body of function
}
```

---

### Class Template

```cpp
// Syntax for class template
template <class tType>
class class_name{
    .
    .

}

// instance of class
class_name<type> ob;
```
Class template with multi paramters
```cpp
// Syntax for class template
template<class T1, class T2, ......>   
class class_name  
{  
       // Body of the class.  
}  

// instance of class
class_name<type> ob;
```

--- 

## Points to Remember

- C++ supports a powerful feature known as a template to implement the concept of generic programming.
- A template allows us to create a family of classes or family of functions to handle different data types.
- Template classes and functions eliminate the code duplication of different data types and thus makes the development easier and faster.
- Multiple parameters can be used in both class and function template.
- Template functions can also be overloaded.
- We can also use nontype arguments such as built-in or derived data types as template arguments.