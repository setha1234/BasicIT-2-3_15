#include<iostream>
using namespace std;
// * Pointer is a variable that stores the address of another variable
// * Pointer is declared by using * operator
// * Pointer is dereferenced by using & operator
 
// int main(){
//     int a = 10; // normal value 
//     int *p; // pointer declaration
//     p = &a; // pointer initialization, & operator is used to get the address of a variable

//     cout << "Value of a: " << a << endl; // prints the value of a
//     cout << "Address of a: " << &a << endl; // prints the address of a
//     cout << "Value of p: " << p << endl; // prints the address of a
//     cout << "Value of *p: " << *p << endl; // prints the value of a using pointer p
//     cout << "Address of p: " << &p << endl; // prints the address of p
//     return 0;
// }

//  * example for calculation using pointer
int main(){
    int a = 10;
    int b = 20;
    int *p1, *p2, sum; // pointer declaration
    p1 = &a; // pointer initialization, & operator is used to get the address of a variable
    p2 = &b; // pointer initialization, & operator is used to get the address of b variable

    sum = *p1 + *p2;
    cout << "Value of a: " << a << endl; // prints the value of a
    cout << "Value of b: " << b << endl; // prints the value of b
    cout << "Value of p1: " << p1 << endl; // prints the address of a
    cout << "Value of p2: " << p2 << endl; // prints the address of b
    cout << "Value of *p1: " << *p1 << endl; // prints the value of a using pointer p1
    cout << "Value of *p2: " << *p2 << endl; // prints the value of b using pointer p2
    cout << "Sum of a and b: " << sum << endl; // prints the sum of a and b
    cout << "Address of sum: " << &sum << endl; // prints the address of p1
}

