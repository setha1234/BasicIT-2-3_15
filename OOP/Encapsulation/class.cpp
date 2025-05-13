// #include<iostream>
// using namespace std;
// //  *  OO
// /*
//     OOA(Analysis)
//     OOD(Design)
//     OOP(Programming)
// */   

// //  *  OOP - Object-Oriented Programming
// //  *  concept OOP have 4  :
// /*
//     Encapsulation 
//     Abstraction / Data Hiding
//     Inheritance
//     Polymorphism
// */ 
// // class Person{
// //     private :
// //         // Data Member
// //         string name;
// //         int id ;
// //         char gender;
// //     public : 
// //         // method member
// //         void InputToData(){
// //             cout<<"Enter name : ";cin>>name;
// //             cout<<"Enter id   : ";cin>>id;
// //             cout<<"Enter gender: ";cin>>gender; 
// //         }
// //         void Display(){
// //             cout<<"Name : "<<name<<endl;
// //             cout<<"ID   : "<<id<<endl;
// //             cout<<"Gender : "<<gender<<endl;
// //         }
// // };

// // int main(){
// //     Person obj;

// //     obj.InputToData();
// //     obj.Display();
    
// //     return 0;
// // }

// class  Book{
//     private : 
//         string title,author;
//         float price;
//     public : 
//         void SetTitle(string name){
//             title = name;
//         }
//         void SetAuthor(string a){
//             author = a;
//         }
//         void SetPrice(float p){
//             price = p;
//         }
//         string GetTitle(){
//             return title;
//         }
//         string GetAuthor(){
//             return author;
//         }
//         float GetPrice(){
//             return price;
//         }

// };
// int main(){
//     system("cls");
//     Book obj;
//     string nameTitle,nameAuthor;
//     float price;
//     cout<<"Enter the title : ";cin>>nameTitle;
//     cout<<"Enter the author : ";cin>>nameAuthor;
//     cout<<"Enter the price : ";cin>>price;
//     obj.SetTitle(nameTitle);
//     obj.SetAuthor(nameAuthor);
//     obj.SetPrice(price);
//     cout<<obj.GetTitle()<<endl;
//     cout<<obj.GetAuthor()<<endl;
//     cout<<obj.GetPrice()<<endl;

//     return 0;
// }


#include<iostream>
using namespace std;
class Employee{
    private : 
        int code;
        string name ;
        char sex;
        float salary;
    public : 
        // Default Constructor
        Employee(){
            code = 0;
            name = "N/A";
            sex = '?';
            salary = 0;
        }
        Employee (string n,int c,char s,float sy){
            this->code = c;
            this->name = n;
            this->salary = sy;
            this->sex = s;
        }
        void Input(){
            cout<<"Enter name : ";cin>>name;
            cout<<"Enter code : ";cin>>code;
            cout<<"Enter salary : ";cin>>salary;
            cout<<"Enter gender : ";cin>>sex;
        }
        void Output(){
            cout<<"name : "<<name<<endl;
            cout<<"code : "<<code<<endl;
            cout<<"salary : "<<salary<<endl;
            cout<<"gender : "<<sex<<endl;
        }
};

int main(){
    Employee obj,obj1("kaka",101,'F',1000);
    obj.Output();
    obj1.Output();

    obj.Input();
    obj.Output();
    

}
