#include <iostream>
using namespace std;
int main(){

  int num1 = 21;
  int num2 = 40;
  int result;
  bool b1 = true;
  bool b2 = false;

  
    //  Arithemetic Operators
  
  cout<<"num1 + num2: "<<(num1 + num2)<<endl;
  cout<<"num1 - num2: "<<(num1 - num2)<<endl;
  cout<<"num1 * num2: "<<(num1 * num2)<<endl;
  cout<<"num1 / num2: "<<(num1 / num2)<<endl;
  cout<<"num1 % num2: "<<(num1 % num2)<<endl;

    // Assignment Operators
 num2 = num1;
 cout<<"= Output: "<<num2<<endl;
 num2 += num1;
 cout<<"+= Output: "<<num2<<endl;
 num2 -= num1;
 cout<<"-= Output: "<<num2<<endl;
 num2 *= num1;      
 cout<<"*= Output: "<<num2<<endl;
 num2 /= num1;      
 cout<<"/= Output: "<<num2<<endl;
 num2 %= num1;      
 cout<<"%= Output: "<<num2<<endl;
  

// Auto-increment and Auto-decrement Operators
  num1++; num2--;
  cout<<"num1++ is: "<<num1<<endl;
  cout<<"num2-- is: "<<num2;


// Bitwise Operators
   result = num1 & num2;
   cout<<"num1 & num2: "<<result<<endl;
   result = num1 | num2;
   cout<<"num1 | num2: "<<result<<endl;
   result = num1 ^ num2;
   cout<<"num1 ^ num2: "<<result<<endl;
   result = ~num1;
   cout<<"~num1: "<<result<<endl;
   result = num1 << 2;
   cout<<"num1 << 2: "<<result<<endl;
   result = num1 >> 2;
   cout<<"num1 >> 2: "<<result;


// Logical Operators
   
   cout<<"b1 && b2: "<<(b1&&b2)<<endl;
   cout<<"b1 || b2: "<<(b1||b2)<<endl;
   cout<<"!(b1 && b2): "<<!(b1&&b2);
  


  return 0;
}