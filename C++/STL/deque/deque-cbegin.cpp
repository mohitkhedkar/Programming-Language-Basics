#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int> numbers={1,2,3,4,5};

  
    cout<<*numbers.cbegin();
    
    return 0;
}