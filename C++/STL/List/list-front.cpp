#include<iostream>
#include<list>
using namespace std;
int main() {

    list<int> l{1,2,3,4};

    int element = l.front();
    cout<<element<<" ";

    return 0;


}