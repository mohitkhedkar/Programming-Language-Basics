#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int> numbers;
    numbers.emplace_back(1);
    numbers.emplace_back(2);
    numbers.emplace_back(3);
    numbers.emplace_back(4);
    numbers.emplace_back(5);
    numbers.emplace_back(6);
    for(auto i=numbers.begin();i!=numbers.end();i++){
        cout<<*i<<" ";
    }

    return 0;
}