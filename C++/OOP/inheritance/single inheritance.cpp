#include<iostream>
using namespace std;
class Account{
    public:
    float salary = 60000;
};

class Programer: public Account{
    public:
        float bonus = 10000;
};

int main(){
    Programer p1;
    cout<<"salary"<<p1.salary<<endl;
    cout<<"bonus"<<p1.bonus<<endl;

    return 0;
}