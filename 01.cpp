#include<iostream>
using namespace std;
int main(){
    int num=5;
    // cout<<num<<endl;
    // cout<<"Address of num is "<<&num;
    int *p=&num;
    cout<<"Value of num = "<<num<<endl;   //5
    cout<<"Address of num = "<<&num<<endl;  //1-cefg
    cout<<"Value of p = "<<p<<endl;
    cout<<"Address of p = "<<&p<<endl;
    *p=10;
    cout<<"New Value of num after changing the value using pointer = "<<num<<endl;
    return 0;
}