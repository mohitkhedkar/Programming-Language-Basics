#include<iostream>
#include<list>
using namespace std;
int main() {

    list<int> l{123,24,323,41};

    l.sort();

    for(auto i=l.begin();i!=l.end();i++){
        cout<<*i<<" ";
    }

    return 0;


}