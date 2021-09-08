#include<iostream>
#include<list>
using namespace std;
int main() {

    list<int> l{1,2,3,4};

    list<int>:: iterator itr = l.begin();
    l.erase(itr);

    for(auto i=l.begin();i!=l.end();i++){
        cout<<*i<<" ";
    }

    return 0;


}