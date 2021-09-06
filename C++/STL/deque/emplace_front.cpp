#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int> reverse_numbers;
    reverse_numbers.emplace_front(1);
    reverse_numbers.emplace_front(2);
    reverse_numbers.emplace_front(3);
    reverse_numbers.emplace_front(4);
    reverse_numbers.emplace_front(5);
    reverse_numbers.emplace_front(6);
    for(auto i=reverse_numbers.begin();i!=reverse_numbers.end();i++){
        cout<<*i<<" ";
    }

    return 0;
}