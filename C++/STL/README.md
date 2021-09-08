# STL

## Containers
- Containers can be described as the objects that hold the data of the same type.
- used to hold different data structures for example arrays, list, trees,etc.

#### Types of Containers:
### Sequence Containers
- vectors, deque, list

### Associative Containers
- set, multiset, map, multimap

### Derived Containers
- stack, queue, priority_queue

--- 

### Vector
- A vector is a sequence class that implements dynami array, means size automatically changes when appending elements.
```cpp
// syntax for vectors
vector<object_type> v1;
```
#### Types of Vector functions
| Function        |	Description                                                         |
| --------------- | ------------------------------------------------------------------- | 
| at()            |	It provides a reference to an element.                              |
| back()          |	It gives a reference to the last element.                           |
| front()         |	It gives a reference to the first element.                          |
| swap()          |	It exchanges the elements between two vectors.                      |
| push_back()     |	It adds a new element at the end.                                   |
| pop_back()      |	It removes a last element from the vector.                          |
| empty()         |	It determines whether the vector is empty or not.                   |
| insert()        |	It inserts new element at the specified position.                   |
| erase()         |	It deletes the specified element.                                   |
| resize()        |	It modifies the size of the vector.                                 |
| clear()         |	It removes all the elements from the vector.                        |
| size()          |	It determines a number of elements in the vector.                   |
| capacity()      |	It determines the current capacity of the vector.                   |
| assign() 	      | It assigns new values to the vector.                                |
| operator=()     |	It assigns new values to the vector container.                      |
| operator[]()    |	It access a specified element.                                      |
| end()           |	It refers to the past-lats-element in the vector.                   |
| emplace()       |	It inserts a new element just before the position pos.              |
| emplace_back()  |	It inserts a new element at the end.                                |
| rend()          | It points the element preceding the first element of the vector.    |
| rbegin()        |	It points the last element of the vector.                           |
| begin()         |	It points the first element of the vector.                          |
| max_size()      |	It determines the maximum size that vector can hold.                |
| cend()          |	It refers to the past-last-element in the vector.                   |
| cbegin()        |	It refers to the first element of the vector.                       |
| crbegin()       |	It refers to the last character of the vector.                      |
| crend()         |	It refers to the element preceding the first element of the vector. |
| data()          |	It writes the data of the vector into an array.                     |
| shrink_to_fit() |	It reduces the capacity & makes it equal to the size of the vector. |

--- 

### deque
- deque stands for Double ended queues. 
- It generalizes the queue  data structure i.e. insertion and deletion can be performed from both the ends either front or back
```cpp
// syntax for deque
deque<object_type> deque_name;
```

| Method |	Description |
| ---- | ----- |
| assign() | 	It assigns new content and replacing the old one.|
| emplace() |	It adds a new element at a specified position.|
| emplace_back() | 	It adds a new element at the end.|
| emplace_front() |	It adds a new element in the beginning of a deque.|
| insert() |	It adds a new element just before the specified position.|
| push_back() |	It adds a new element at the end of the container.|
| push_front() |	It adds a new element at the beginning of the container.|
| pop_back() |	It deletes the last element from the deque.|
| pop_front() |	It deletes the first element from the deque.|
| swap() |	It exchanges the contents of two deques.|
| clear() |	It removes all the contents of the deque.|
| empty() |	It checks whether the container is empty or not. |
| erase() |	It removes the elements.|
| max_size() |	It determines the maximum size of the deque.|
| resize() |	It changes the size of the deque.|
| shrink_to_fit() |	It reduces the memory to fit the size of the deque.|
| size() |	It returns the number of elements.|
| at() |	It access the element at position pos.|
| operator[]() | 	It access the element at position pos.|
| operator=() |	It assigns new contents to the container.|
| back() |	It access the last element.|
| begin() |	It returns an iterator to the beginning of the deque.|
| cbegin() |	It returns a constant iterator to the beginning of the deque.|
| end() |	It returns an iterator to the end.|
| cend() |	It returns a constant iterator to the end.|
| rbegin() |	It returns a reverse iterator to the beginning.|
| crbegin() |	It returns a constant reverse iterator to the beginning.|
| rend() |	It returns a reverse iterator to the end.|
| crend() |	It returns a constant reverse iterator to the end.|
| front() |	It access the last element. |

--- 

### List
- List is a contiguous container while vector is a non-contiguous container i.e list stores the elements on a contiguous memory and vector stores on a non-contiguous memory.
- Insertion and deletion in the middle of the vector is very costly as it takes lot of time in shifting all the elements. Linklist overcome this problem and it is implemented using list container.
- List supports a bidirectional and provides an efficient way for insertion and deletion operations.
- Traversal is slow in list as list elements are accessed sequentially while vector supports a random access.

```cpp
// empty list
#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int> l;
}
```

|Method |	Description |
| ----- | ----- |
|insert() |	It inserts the new element before the position pointed by the iterator.|
|push_back() |	It adds a new element at the end of the vector.|
|push_front() |	It adds a new element to the front.|
|pop_back() |	It deletes the last element.|
|pop_front() |	It deletes the first element.|
|empty() |	It checks whether the list is empty or not.|
|size() |	It finds the number of elements present in the list.|
|max_size() |	It finds the maximum size of the list.|
|front() |	It returns the first element of the list.|
|back() |	It returns the last element of the list.|
|swap() |	It swaps two list when the type of both the list are same.|
|reverse() |	It reverses the elements of the list.|
|sort() |	It sorts the elements of the list in an increasing order. | 
|merge() |	It merges the two sorted list. |
|splice() |	It inserts a new list into the invoking list. |
|unique() |	It removes all the duplicate elements from the list. |
|resize() |	It changes the size of the list container. |
|assign() |	It assigns a new element to the list container. |
|emplace() |	It inserts a new element at a specified position. |
|emplace_back() |	It inserts a new element at the end of the vector. |
|emplace_front() |	It inserts a new element at the beginning of the list. |

--- 

### Set
- Set are a type of associative containers in which each element has to be unique, because the value of the element identifies it.
- The value of the element cannot be modified once it is added to the set, though it is possible to remove and add the modified value of that element. 
```cpp
#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int> s{123,45,97,456};

}
```

|Functions | Description |
|----      |-----        |
| Begin |	Returns an iterator pointing to the first element in the set.|
| cbegin | 	Returns a const iterator pointing to the first element in the set.|
| End |	Returns an iterator pointing to the past-end.|
| Cend |	Returns a constant iterator pointing to the past-end.|
| rbegin |	Returns a reverse iterator pointing to the end.|
| Rend |	Returns a reverse iterator pointing to the beginning.|
| crbegin |	Returns a constant reverse iterator pointing to the end.|
| Crend |	Returns a constant reverse iterator pointing to the beginning.|
| empty |	Returns true if set is empty.|
| Size |	Returns the number of elements in the set.|
| max_size |	Returns the maximum size of the set.|
| insert | 	Insert element in the set.|
| Erase | 	Erase elements from the set.|
| Swap |	Exchange the content of the set.|
| Clear |	Delete all the elements of the set.|
| emplace |	Construct and insert the new elements into the set.|
| emplace_hint | 	Construct and insert new elements into the set by hint.|
| key_comp  |	Return a copy of key comparison object.|
| value_comp |	Return a copy of value comparison object.|
| Find |	Search for an element with given key.|
| count |	Gets the number of elements matching with given key.|
| lower_bound |	Returns an iterator to lower bound.|
| upper_bound |	Returns an iterator to upper bound.|
| equal_range |	Returns the range of elements matches with given key.|
| get_allocator |	Returns an allocator object that is used to construct the set.|
| operator== |	Checks whether the two sets are equal or not.|
| operator!= |	Checks whether the two sets are equal or not.|
| operator< |	Checks whether the first set is less than other or not.|
| operator<= |	Checks whether the first set is less than or equal to other or not.|
| operator> |	Checks whether the first set is greater than other or not.|
| operator>= |	Checks whether the first set is greater than equal to other or not.|
| swap() | 	Exchanges the element of two sets.|

---

###