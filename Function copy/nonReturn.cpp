#include<iostream>
using namespace std;
int id;
float salary;
string name,gender,major;

void InputEmployee(){
    cout<<"============================[ Insert Employee ]================================"<<endl;
    cout<<"Enter Employee ID : ";
    cin>>id;
    cout<<"Enter Employee Name : ";
    cin>>name;
    cout<<"Enter Employee Gender : ";
    cin>>gender;
    cout<<"Enter Employee Salary : ";
    cin>>salary;
    cout<<"Enter Employee Major : ";
    cin>>major;
}

void DisplayEmployee(){
    cout<<"============================[ Employee Information ]=============================="<<endl;
    cout<<"Employee ID : "<<id<<endl;
    cout<<"Employee Name : "<<name<<endl;
    cout<<"Employee Gender : "<<gender<<endl;
    cout<<"Employee Salary : "<<salary<<endl;
    cout<<"Employee Major : "<<major<<endl;
}


int main(){
    system("cls");
    InputEmployee();
    DisplayEmployee();
    InputEmployee();
    DisplayEmployee();
   

    return 0;
}