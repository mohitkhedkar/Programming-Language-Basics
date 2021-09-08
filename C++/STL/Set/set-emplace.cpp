#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int> s{21,45,56,89,121};
    s.emplace(234);
    s.emplace(432);
    for(auto i=s.begin();i!=s.end();i++){
        cout<<*i<<" ";
    }


    return 0;
}