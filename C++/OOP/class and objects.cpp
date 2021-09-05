#include<iostream>
using namespace std;
class Student{
    public:
        int id;
        string name;
};
int main(){
    Student s1;
    s1.id = 101;
    s1.name = "Ajay";
    cout<<"id: "<<s1.id<<" Name: "<<s1.name<<endl;


    return 0;
    
}