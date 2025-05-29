#include <iostream>
#include <fstream> // fstream is library for file operations
using namespace std;
// int main(){
//     ofstream file; // Create an object of fstream class
//     // open file
//     file.open("example.txt");
//     string name;
//     int age;
//     float salary;
//     char gender;

//     cout<<"enter your name: ";cin>>name;
//     cout<<"enter your age: ";cin>>age;
//     cout<<"enter your salary: ";cin>>salary;
//     cout<<"enter your gender: ";cin>>gender;

//     if(file){
//         cout<<"File opened successfully"<<endl;
//         file<< name <<"  "<< age <<"  " << salary <<"  " << gender;
//     }else{
//         cout<<"Error opening file"<<endl;
//     }
    
//     file.close(); // Close the file
    
//     return 0;

// }


// int main(){
//     ifstream file;// ifstream is a read file 
//     file.open("test.txt");
//     string line;
//     while(getline(file,line)){
//         cout<<line<<endl;
//     }
//     file.close(); // Close the file
//     return 0;
// }



int main(){
    fstream file;// fstream is class in library file stream. write and read both
    // we need to add the mode : ios::app,ios::in,ios::out
    file.open("example.txt",ios::in); 
    // mode ios::app is mode write / add;
    // mode ios::out is mode write / create;
    // mode ios::in is mode read / display
    string line;
    while(getline(file,line)){
        cout<<line<<endl;
    }
    file.close();


    return 0;
}




