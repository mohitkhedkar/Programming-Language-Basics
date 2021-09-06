#include<iostream>
using namespace std;
int main(){

    int arr[5];
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    // using for each
    for(int i: arr) {
        cout<<arr[i];
    }

    return 0;
}