#include<iostream>
using namespace std;
int main(){
    /*
    int arr[10]={23,122,41,67};

    int temp[10]={1,2};
    cout<<sizeof(temp)<<endl; //40
    cout<<sizeof(*temp)<<endl; //40

    int *ptr =&temp[0];
    cout<<sizeof(ptr)<<endl; //4
    cout<<sizeof(*ptr)<<endl; //4
    cout<<sizeof(&ptr)<<endl; //4
    */

   int a[20]={1,2,3,5};
   cout<<&a[0]<<endl; 
   cout<<&a<<endl;
   cout<<a<<endl;

   int *p=&a[0];
   cout<<p<<endl;
   cout<<*p<<endl;
   cout<<&p<<endl;



    return 0;
}