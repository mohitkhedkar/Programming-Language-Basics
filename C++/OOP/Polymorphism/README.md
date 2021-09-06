# Polymorphism 
- polymorphism means having many forms.

### Types of Polymorphism 
- Compile Time 
- run time

---
### Compile Time Polymorphism
- overloaded functions are invoked by matching the type and number of arguments.
- compile time polymorphism can be achieved by 
    #### Function overloading
    - The advantage of Function overloading is that it increases the readability of the program because you don't need to use different names for the same action.


    #### Operator overloading
    - The advantage of Operators overloading is to perform different operations on the same operand.
   
    ##### Rules for Operator Overloading

    - Existing operators can only be overloaded, but the new operators cannot be overloaded.
    - The overloaded operator contains atleast one operand of the user-defined data type.
    - We cannot use friend function to overload certain operators. However, the member function can be used to overload those operators.
    - When unary operators are overloaded through a member function take no explicit arguments, but, if they are overloaded by a friend function, takes one argument.
    - When binary operators are overloaded through a member function takes one explicit argument, and if they are overloaded through a friend function takes two explicit arguments.
 



---  
#### Run time polymorphism 
- Rum time polymorphism is achieved when the object method is invoked at the run time instead of complile time.
- achieved by method overloading-> also known as dynamic binding or late binding

#### Function overriding
- if the derived class defines same function as defined in its base class, its known as function overridin in Cpp

#### Virtual Function 
- A cpp virtual function is a member function in the base class that you redefine in a derived class. declared using the `virtual` keyword
- used to tell compiler to perform `dynamic linkage` or `late binding` on the function
- When the function is made virtual, C++ determines which function is to be invoked at the runtime based on the type of the object pointed by the base class pointer.

    ##### Rules for Virtual Function
    
    - Virtual functions must be members of some class.
    - Virtual functions cannot be static members.
    - They are accessed through object pointers.
    - They can be a friend of another class.
    - A virtual function must be defined in the base class, even though it is not used.
    - The prototypes of a virtual function of the base class and all the derived classes must be identical. If the two functions with the same name but different prototypes, C++ will consider them as the overloaded functions.
    - We cannot have a virtual constructor, but we can have a virtual destructor
    


---
| Compile Time | Run Time |
| ------------ | -------- |
| The function to be invoked is known at the compile time. | The function to be invoked is known at the run time. |
| It is also known as overloading, early binding and static binding. | It is also known as overriding, Dynamic binding and late binding. |
| Overloading is a compile time polymorphism where more than one method is having the same name but with the different number of parameters or the type of the parameters. | Overriding is a run time polymorphism where more than one method is having the same name, number of parameters and the type of the parameters. |
| It is achieved by function overloading and operator overloading. | It is achieved by virtual functions and pointers.|
| It provides fast execution as it is known at the compile time. | It provides slow execution as it is known at the run time. |
| It is less flexible as mainly all the things execute at the compile time. | It is more flexible as all the things execute at the run time. |
