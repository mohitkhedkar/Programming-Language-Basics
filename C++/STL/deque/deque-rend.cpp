#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int> numbers={1,2,3,4,5};
        
    for(auto i=numbers.rbegin();i!=numbers.rend();i++){
        cout<<*i<<" ";
    }

    return 0;
}