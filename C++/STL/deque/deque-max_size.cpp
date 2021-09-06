#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int> numbers={1,2,3,4,5};
    
    for(auto i=numbers.begin();i!=numbers.end();i++){
        cout<<*i<<" ";
    }
    cout<<"\n max size: "<< numbers.max_size();

    return 0;
}