#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int> s{21,45,56,89,121};

    for(auto i=s.rbegin();i!=s.rend();i++){
        cout<<*i<<" ";
    }

    return 0;
}