#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<string> v1;
    v1.push_back("Hello world");
    v1.push_back("How are you??");
    for(vector<string>::iterator itr=v1.begin();itr!=v1.end();++itr){
        cout<<*itr;
        return 0;
    }
}