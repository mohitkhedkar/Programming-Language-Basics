#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int> s{21,45,56,89,121};

    cout<<s.max_size();

    return 0;
}