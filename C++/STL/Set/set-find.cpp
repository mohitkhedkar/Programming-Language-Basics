#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int> s{21,45,56,89,121};

    auto itr = s.find(45);
    cout<<*itr<<" "<<endl;

    auto itr2 = s.find(98);
    cout<<*itr2<<" "<<endl;
    
     
    for(auto i=s.begin();i!=s.end();i++){
        cout<<*i<<" ";
    }


    return 0;
}