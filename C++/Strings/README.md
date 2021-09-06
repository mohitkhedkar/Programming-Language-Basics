# Strings

- A string variable contains a collection of characters surrounded by double quotes
```cpp
string name= "Ajay";
```

### Types of Strings
- C-Style Character String
- String class type introduced with Std C++
    ```cpp
    include<string>
    ```

### Types of Functions:
|Function | Purpose|
|-------- | ------ |
| strcpy(s1,s2); | copies string s2 into s1 |
| strcat(s1,s2); | Concatenates string s2 onto the end of string s1 |
| strlen(s1); | returns the length of string s1 |
| strcmp(s1,s2); | Returns 0 if s1 and s2 are the same; less than 0 if s1<s2; greater than 0 if s1 >s2. |
| strchr(s1, ch); | Returns a pointer to the first occurrence of character ch in string s1. |
| strstr(s1, s2); | Returns a pointer to the first occurrence of string s2 in string s1. |
| str.begin() | This function returns an iterator to beginning of the string. |
| str.end() | This function returns an iterator to end of the string. |
| str.rbegin() | This function returns a reverse iterator pointing at the end of string. |
| str.rend() | This function returns a reverse iterator pointing at beginning of string. |
| s1.swap(s2) | This function swaps one string with other. |