#include<iostream>
using namespace std;
//  *  OO
/*
    OOA(Analysis)
    OOD(Design)
    OOP(Programming)
*/   

//  *  OOP - Object-Oriented Programming
//  *  concept OOP have 4  :
/*
    Encapsulation 
    Abstraction / Data Hiding
    Inheritance
    Polymorphism
*/ 
// class Person{
//     private :
//         // Data Member
//         string name;
//         int id ;
//         char gender;
//     public : 
//         // method member
//         void InputToData(){
//             cout<<"Enter name : ";cin>>name;
//             cout<<"Enter id   : ";cin>>id;
//             cout<<"Enter gender: ";cin>>gender; 
//         }
//         void Display(){
//             cout<<"Name : "<<name<<endl;
//             cout<<"ID   : "<<id<<endl;
//             cout<<"Gender : "<<gender<<endl;
//         }
// };

// int main(){
//     Person obj;

//     obj.InputToData();
//     obj.Display();
    
//     return 0;
// }

class  Book{
    private : 
        string title,author;
        float price;
    public : 
        void SetTitle(string name){
            title = name;
        }
        void SetAuthor(string a){
            author = a;
        }
        void SetPrice(float p){
            price = p;
        }
        string GetTitle(){
            return title;
        }
        string GetAuthor(){
            return author;
        }
        float GetPrice(){
            return price;
        }

};
int main(){
    system("cls");
    Book obj;
    string nameTitle,nameAuthor;
    float price;
    cout<<"Enter the title : ";cin>>nameTitle;
    cout<<"Enter the author : ";cin>>nameAuthor;
    cout<<"Enter the price : ";cin>>price;
    obj.SetTitle(nameTitle);
    obj.SetAuthor(nameAuthor);
    obj.SetPrice(price);
    cout<<obj.GetTitle()<<endl;
    cout<<obj.GetAuthor()<<endl;
    cout<<obj.GetPrice()<<endl;

    return 0;
}