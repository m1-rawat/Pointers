#include<iostream>
using namespace std;

int& func(int a){  // pass by reference se BAD PRACTICE
    int num=a;
    int& ans=num;
    return ans;
}

int* fun(int n){   //pointer kiya 
    int* ptr=&n;
    return ptr;
}

void update2(int& n){
    n++;
}

void update(int n){
    n++;
}

int main(){

    /*
    int i=5;

    int &j =i; //creating a reference

    cout<<i<<endl;
    i++;
    cout<<i<<endl;
    j++;
    cout<<i<<endl;
    */


   int n=5;
   cout<<"before "<<n<<endl;
   update2(n);
   cout<<"After "<<n<<endl;

   fun(n);

    return 0;
}