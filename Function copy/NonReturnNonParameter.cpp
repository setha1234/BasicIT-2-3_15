#include<iostream>
using namespace std;
// Function  : Non-Return and Non-Parameter

double Sum(){
    float a,b,result;
    cout<<"Enter value a :";cin>>a;
    cout<<"Enter value b :";cin>>b;
    result = a + b;
    cout<<"Result : "<<result<<endl;
}



int main(){
    Sum();
    return 0;
}

