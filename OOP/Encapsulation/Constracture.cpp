// #include<iostream>
// using namespace std;
// class Person{
//     private : 
//         string name;
//         int id;
//     public : 
//         // consturetor
//         Person(){
//           name = "Unknow";
//           id  = 0;  
//         }

//         Person (string n,int i){
//             this->name = n;
//             this->id = i;
//         }
//         void Display(){
//             cout<<"Name : "<<name<<endl;
//             cout<<"ID   : "<<id<<endl;
//         }
// };
// int main(){
//     system("clear");
//     // Default construetor with non-parameter by object
//     Person obj;
//     obj.Display();
//     // construetor with parameter use by object 1
//     Person obj1("Setha",123);
//     obj1.Display();
//     return 0;
// }

#include<iostream>
using namespace std;
// create a book by construetor

class Book{
    private : 
        string title,author,public_date;
        float price;
    public : 
        Book(){
            title = "Unknow Name";
            author = "Unknow Author";
            public_date = "Unknow";
            price = 0.0;
        }
        Book (string t,string a, string pd,float p){
            this->title = t;
            this->author = a;
            this->public_date = pd;
            this->price = p;
        }
        void Display_Book(){
            cout<<"Title Book : "<<title<<endl;
            cout<<"Author     : "<<author<<endl;
            cout<<"Public Date: "<<public_date<<endl;
            cout<<"Price Book : "<<price<<endl;
        }
};

int main(){
    Book book;
    book.Display_Book();
    string name_title,name_author,public_date;
    float price_book;
    cout<<"Enter Title Book : ";getline(cin,name_title);
    cout<<"Enter Author Name: ";getline(cin,name_author);
    cout<<"Enter Public Date: ";getline(cin,public_date);
    cout<<"Enter Price Book : ";cin>>price_book;

    Book book1(name_title,name_author,public_date,price_book);
    book1.Display_Book();
}