# OOP

## OOP concepts:
Object-Oriented Programming is a methodology or paradigm to design a program using classes and objects. It simplifies the software development and maintenance by providing some concepts:
    Object
    Class
    Inheritance
    Polymorphism
    Abstraction
    Encapsulation

#### Advantage of OOPs

- OOPs makes development and maintenance easier where as in Procedure-oriented programming language it is not easy to manage if code grows as project size grows.
- OOPs provide data hiding whereas in Procedure-oriented programming language a global data can be accessed from anywhere.
- OOPs provide ability to simulate real-world event much more effectively. We can provide the solution of real word problem if we are using the Object-Oriented Programming language.
---
## Objects and Classes

### Objects:
- Object is an entity that has state and behavoir
- object is a runtime entity, its created at runtime
- object is an instance of a class. all the memebers of the class can be accessed through object
```cpp
Student s1; // creating the object of student class
```

### Classes:
- In cpp, class is group of similar objects.
- It's template from which are objects are created.
- It can have fields, methods, constructors,etc.

```cpp
class Student{
    public:
        int id;
        float salary;
        string name;
};
```

---

## Constructors
- constructors is a special method which is invoked automatically at the time of object creation.
- it used to initilize the data members of new object generally.
- it has the same name as of class

-Types of constructors:
    - Default constructors
    - Parameterized constructors
    - Copy constructors

##### Default Constructors:
- constructors which has no arguments.
- invoked at the time of creating the object.
```cpp
#inculude<iostream>
using namespace std;
class Student{
    public:
        Student(){
            Cout<<"Default constructors";
        }
};
int main(){
    Student s1;

    return 0;
}
```

##### Parameterized constructors:
- A constructor which has parameters.
- used to provide different values to distinct objects.
```cpp
#include <iostream>
using namespace std;
class Employee {
   public:
       int id;//data member (also instance variable)    
       string name;//data member(also instance variable)
       float salary;
       Employee(int i, string n, float s)  //parameterized constructors
        {  
            id = i;  
            name = n;  
            salary = s;
        }  
       void display()  
        {  
            cout<<id<<"  "<<name<<"  "<<salary<<endl;  
        }  
};
int main(void) {
    Employee e1 =Employee(101, "Sonoo", 890000); //creating an object of Employee 
    Employee e2=Employee(102, "Nakul", 59000); 
    e1.display();  
    e2.display();  
    return 0;
}
```

##### Copy Constructors:
- when we initialize the object with another existing object of the same type
- when the object of the same class type is passed by value as an argument
- when the function returns the object of the same class type by value.

```cpp
    #include <iostream>  
    using namespace std;  
    class A  
    {  
       public:  
        int x;  
        A(int a)                // parameterized constructor.  
        {  
          x=a;  
        }  
        A(A &i)               // copy constructor  
        {  
            x = i.x;  
        }  
    };  
    int main()  
    {  
      A a1(20);               // Calling the parameterized constructor.  
     A a2(a1);                //  Calling the copy constructor.  
     cout<<a2.x;  
      return 0;  
    }  
```
---

##### Destructor 
- destructor work opposite to constructors; it destructs the object of classes.
- it can be defined onlu once in a class. & is invloked automatically
- defined like constructor with the same name as of class with the prefix of tilde sign(~)
```cpp
#inculude<iostream>
using namespace std;
class Student{
    public:
        Student(){
            Cout<<"Default constructors";
        }
        ~Student(){
            cout<<"Destructor Invoked";
        }
};
int main(){
    Student s1;

    return 0;
}
```
---

##### This Pointer
- referes to the current instance of the class.
- 3 main usage
    - used to pass current object as a parameter to another method
    - used to declare indexers
    - used to refer current class instance variable
```cpp
#include<iostream>
using namespace std;
class Employee{
    public:
        int id;
        string name;
        Employee(int id,string name){
            this->id= id;
            this->name = name;
        }
        void display(){
            cout<<id<<" " <<name<<endl;
        }
};

int main(){
    Employee e1,e2;
    e1.id=100;
    e1.name="Ajay";

    e2.id=100;
    e2.name="Ajay";

    e1.display();
    e2.display();

}
```

---
##### Structure

- Collection of dissimilar elements
- use to design the custom datatype
```cpp
// Global define
struct book{
    int id;
    string name;
    float price;
    
};
int main(){
    book b1;
}

```
```cpp
// local define
int main(){
struct book{
    int id;
    string name;
    float price;
    
    };
    
}

```
| Structure | Class   |
| --------- | :------:|
| If access specifier is not declared explicility, then by default access specific will be public | if access specifier is not declared explicility , then by default access specific will be private |
| the instance of the structure is known as "Strucutre Variable" | The instance of the class is known as "object of the class"  |  

---

##### Enumeration
- Enum is the datatype that contains fixed set of contains
- imp points
    - enum improves type safety
    - enum can be easily used to switch
    - enum can be traversed
    - enum can have fields, constructors and methods
    - may be implemented many interfaces but cannot extend any class because it internally extends enum class

```cpp
#include<iostream>
using namespace std;
enum week{monday,tuesday,wednesday,thrusday,friday,saturday,sunday};
int main(){
    week day;
    day = "friday";
    cout<<"day: " << day+1<<endl;
    return 0;
}

```
