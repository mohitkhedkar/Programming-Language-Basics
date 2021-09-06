#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int> numbers={1,2,3,4,5};
    deque<int>::iterator it;
    it = numbers.begin();

    numbers.erase(it);
    
        
    for(auto i=numbers.begin();i!=numbers.end();i++){
        cout<<*i<<" ";
    }

    return 0;
}