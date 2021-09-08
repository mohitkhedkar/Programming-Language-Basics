#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int> s{21,45,56,89,121};

    auto itr = s.upper_bound(21);
    cout<<*itr<<endl;
    for(auto i=s.begin();i!=s.end();i++){
        cout<<*i<<" ";
    }


    return 0;
}