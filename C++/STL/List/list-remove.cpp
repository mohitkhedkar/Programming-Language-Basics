#include<iostream>
#include<list>
using namespace std;
int main() {

    list<int> l{1,2,3,4};

    l.remove(3);

    for(auto i=l.begin();i!=l.end();i++){
        cout<<*i<<" ";
    }

    return 0;


}