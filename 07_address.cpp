#include<iostream>
using namespace std;
int main(){
    int arr[10]={23,122,41,67};
    cout<<"address of first memory block  is : " << arr << endl; 
    cout<<"address of first memory block  is : " << &arr[0] << endl; 

    cout<<*arr<<endl;  //    23
    cout<<*arr+1<<endl; //   24
    cout<<*(arr+1)<<endl; // real value in array is 2 and then +1 =122
    cout<<*(arr)+1<<endl; // 24
    cout<<arr[2]<<endl;   //41
    cout<<*(arr+2)<<endl;  //41

    int i=3;
    cout<<i[arr]<<endl;  //67

    return 0;
}