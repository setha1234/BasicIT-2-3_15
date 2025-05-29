#include <iostream>
#include <fstream>
using namespace std;

// int main()
// {
//     // int number = 123;
//     // ofstream outFile("data.bin", ios::binary);
//     // outFile.write(reinterpret_cast<char *>(&number), sizeof(number));
//     // outFile.close();

//     int number;
//     ifstream inFile("data.bin", ios::binary);
//     inFile.read(reinterpret_cast<char *>(&number), sizeof(number));
//     inFile.close();

//     cout << "Number: " << number << endl;

//     return 0;
// }


int main(){
    struct Student {
    char name[20];
    int age;
};

// Student s1 = {"Alice", 21};
// ofstream out("student.bin", ios::binary);
// out.write(reinterpret_cast<char*>(&s1), sizeof(s1));
// out.close();
Student s2;
ifstream in("student.bin", ios::binary);
in.read(reinterpret_cast<char*>(&s2), sizeof(s2));
in.close();

cout << "Name: " << s2.name << ", Age: " << s2.age << endl;


}


