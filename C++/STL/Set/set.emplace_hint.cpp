#include<iostream>
#include<set>
using namespace std;
int main() {
set<int> s;
    auto it = s.emplace_hint(s.begin(), 1);
  

    it = s.emplace_hint(it, 2);
  
    s.emplace_hint(it, 3);
    s.emplace_hint(it, 0);
  

    for (auto it = s.begin(); it != s.end(); it++)
        cout << *it << " ";
  
    return 0;
}