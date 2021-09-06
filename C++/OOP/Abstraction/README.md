# Abstraction

- Data Abstraction is a process of providing only the essential details to the outside world and hiding the internal details, i.e., representing only the essential details in the program.
- Data Abstraction is a programming technique that depends on the seperation of the interface and implementation details of the program.

### Data Abstraction can be achieved in two ways:
    - Abstraction using classes
    - Abstraction in header files

### Abstraction using classes
- A class is used to group all the data members and member functions into a single unit by using the access specifiers.
- A class has the responsibility to determine which data members is to be visible outside and which is not

### Abstraction in header files
```cpp

    #include <iostream>  
    #include<math.h>  
    using namespace std;  
    int main()  
    {    
     int n = 4;  
       int power = 3;  
       int result = pow(n,power);         // pow(n,power) is the  power function  
       std::cout << "Cube of n is : " <<result<< std::endl;  
       return 0;  
    }  

```
--- 
### Advantages Of Abstraction:

- Implementation details of the class are protected from the inadvertent user level errors.
- A programmer does not need to write the low level code.
- Data Abstraction avoids the code duplication, i.e., programmer does not have to undergo the same tasks every time to perform the similar operation.
- The main aim of the data abstraction is to reuse the code and the proper partitioning of the code across the classes.
- Internal implementation can be changed without affecting the user level code.
 