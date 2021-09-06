#include<iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> numbers{ 1,2,3,5,9};

    
    for(auto i=numbers.begin();i!=numbers.end();i++){
        cout<<*i<<" ";
    }

    return 0;
}
