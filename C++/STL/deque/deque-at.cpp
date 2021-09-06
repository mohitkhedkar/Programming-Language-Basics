#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int> numbers={321,25,33,74,305};
    
    cout<<numbers.at(2);

    return 0;
}