#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int> numbers={1,2,3,4,5};
    deque<int>::iterator it=numbers.begin();
    ++it;
    it = numbers.insert(it,213);
    
    for(auto i=numbers.begin();i!=numbers.end();i++){
        cout<<*i<<" ";
    }

    return 0;
}