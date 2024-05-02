#include<iostream>
using namespace std;
int main(){
    int i=5;
    // int *p = &i;//pointer to an integer variable
    int *p=0;
    p=&i;

    cout<<p<<endl; // address of i
    cout<<*p<<endl; // value of i 


    int *q = &i;
    cout<<q<<endl; // address of i
    cout<<*q<<endl; // value of i 

    return 0;
}