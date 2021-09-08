#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int> s{21,45,56,89,121};
    set<int> s2{34,76,87,98};
    s.swap(s2);
    for(auto i=s.begin();i!=s.end();i++){
        cout<<*i<<" ";
    }
    for(auto i=s2.begin();i!=s2.end();i++){
        cout<<*i<<" ";
    }

    return 0;
}