#include <iostream>
#include <vector>
using namespace std;
 
int main()
{
    vector<int> numbers{ 4351, 4672, 37, 487,655 };
    vector<int> numbers2{23,67,345,2342};
    numbers.swap(numbers2);
    for(auto i=numbers.begin();i!=numbers.end();i++){
        cout<<*i<<" ";
    }
    cout<<endl;
    for(auto i=numbers2.begin();i!=numbers2.end();i++){
        cout<<*i<< " ";
    }

    return 0;
}