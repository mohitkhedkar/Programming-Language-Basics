#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int> numbers1={1,2,3,4,5};
    deque<int> numbers2={998,67,65,7654};

    numbers1.swap(numbers2);

    for(auto i=numbers1.begin();i!=numbers1.end();i++){
        cout<<*i<<" ";
    }
    cout<<endl;

    for(auto i=numbers2.begin();i!=numbers2.end();i++){
        cout<<*i<<" ";
    }
    return 0;
}