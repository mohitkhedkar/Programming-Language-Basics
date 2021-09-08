#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int> s;
    s.insert(23);
	s.insert(45);
	s.insert(10);
    cout<<s.size();

    return 0;
}
