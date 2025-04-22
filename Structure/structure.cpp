// #include<iostream>
// using namespace std;
// struct Employee {
//     string name;
//     int id;
//     char gender;

// };

// void printEmployee(struct Employee emp) {
//     cout << "Name   : " << emp.name << endl;
//     cout << "ID     : " << emp.id << endl;
//     cout << "Gender : " << emp.gender << endl;
// }

// int main(){
//     struct Employee e,obj;
//     e.name = "Setha Sith";
//     e.id  = 123;
//     e.gender = 'M';

//     obj.name = "John Smith";
//     obj.id  = 456;
//     obj.gender = 'M';   

//     cout<<"Name   : "<<e.name<<endl;
//     cout<<"ID     : "<<e.id<<endl;
//     cout<<"Gender : "<<e.gender<<endl;

//     cout<<"Name   : "<<obj.name<<endl;
//     cout<<"ID     : "<<obj.id<<endl;
//     cout<<"Gedner : "<<obj.gender<<endl;

//     cout<<"------------------------"<<endl;
//     printEmployee(obj);
//     cout<<"------------------------"<<endl;

//     return 0;
// }


#include<iostream>
using namespace std;
struct Book {
    char title[50];
    string author;
    int create_at_year;
    float price;
}book1,book2;


int main(){
    //  Input Book Information
    cout<<"Enter Book Title  : ";cin.getline(book1.title,50);
    cout<<"Enter Book Author : ";getline(cin,book1.author);
    cout<<"Enter Book Price  : ";cin>>book1.price;
    cout<<"Enter Book Crate  : ";cin>>book1.create_at_year;
    // Output Book Information
    cout<<"------------------------"<<endl;
    cout<<"Book Title : "<<book1.title<<endl;
    cout<<"Book Author: "<<book1.author<<endl;
    cout<<"Book Price : "<<book1.price<<endl;
    cout<<"Create at  : "<<book1.create_at_year<<endl;


}