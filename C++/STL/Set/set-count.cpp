#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int> s{21,45,56,89,121};

    
    cout<<s.count(45)<<endl;
    cout<<s.count(98)<<endl;
 
    for(auto i=s.begin();i!=s.end();i++){
        cout<<*i<<" ";
    }


    return 0;
}