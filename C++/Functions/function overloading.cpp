#include<iostream>
using namespace std;
int area(int ,int);
float area(int);
int main(){
    int r;
    cout<<"Enter the Radius"<<endl;
    cin>>r;
    float a = area(r);
    cout<<"area = "<<a<<endl;
    int l,b,A;
    cout<<"length and breadth of rectangle"<<endl;
    cin>>l>>b;
    A= area(l,b);
    cout<<"area = "<<A<<endl;
    return 0;
}

float area(int x){
    return(3.14*x*x);
}

int area(int L,int B){
    return(L*B);
}