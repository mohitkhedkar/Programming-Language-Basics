#include<iostream>
#include<list>
using namespace std;
int main() {

    list<int> l{1,2,3,4};
    list<int> l2{35,78,25,64};

    l.swap(l2);

    for(auto i=l.begin();i!=l.end();i++){
        cout<<*i<<" ";
    }
    for(auto i=l2.begin();i!=l2.end();i++){
        cout<<*i<<" ";
    }
    return 0;


}