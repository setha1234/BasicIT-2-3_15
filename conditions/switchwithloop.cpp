#include<iostream>
using namespace std;
int main(){
    int id,op,val,i=1;
    string name,gender,address;
    double salary;

    again:
    cout<<"==================================================="<<endl;
    cout<<" 1. Add Employee"<<endl;
    cout<<" 2. Display Employee"<<endl;
    cout<<" 3. Edit Employee"<<endl;
    cout<<" 4. Exit"<<endl;
    cout<<" Enter the options :";
    cin>>op;


    switch(op){
        case 1:{
            cout<<"\n======================Add========================"<<endl;
            cout<<"Enter your employee : ";
            cin>>val;
            while(i<=val){
                cout<<"Enter Employee ID : ";
                cin>>id;
                cout<<"Enter Employee Name : ";
                cin>>name;
                cout<<"Enter Employee Gender : ";
                cin>>gender;
                cout<<"Enter Employee Address : ";
                cin>>address;
                cout<<"Enter Employee Salary : ";
                cin>>salary;
                i++;
                goto again;
            }

        }break;
        case 2:{
            // display employee
            cout<<"\n======================Display========================"<<endl;
            cout<<"Employee ID : "<<id<<endl;
            cout<<"Employee Name : "<<name<<endl;
            cout<<"Employee Gender : "<<gender<<endl;
            cout<<"Employee Address : "<<address<<endl;
            cout<<"Employee Salary : "<<salary<<endl;
            goto again;
        }break;
        case 3:{
            // edit employee
            cout<<"\n======================Edit========================"<<endl;
            cout<<"Enter Employee ID to edit : ";
            cin>>id;
            cout<<"Enter Employee Name : ";
            cin>>name;
            cout<<"Enter Employee Gender : ";
            cin>>gender;
            cout<<"Enter Employee Address : ";
            cin>>address;
            cout<<"Enter Employee Salary : ";
            cin>>salary;
            goto again;
        }break;
        case 4:{
            cout<<"====================GoodBye==================="<<endl;
        }
            
    }





    return 0;

}