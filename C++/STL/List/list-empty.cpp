#include<iostream>
#include<list>
using namespace std;
int main() {

    list<int> l{1,2,3,4};

    if(l.empty()){
        cout<<"Empty";
    } else {
        cout<<"Not empty";
    }
    for(auto i=l.begin();i!=l.end();i++){
        cout<<*i<<" ";
    }

    return 0;


}