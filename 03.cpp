#include<iostream>
using namespace std;
int main(){
    // int num=5;
    // int a =num;
    // a++;
    // cout<<num<<endl;

    int a =5;
    int *ptr =&a;
    *ptr=(*ptr) *2;
    cout<<*ptr<<endl;
}