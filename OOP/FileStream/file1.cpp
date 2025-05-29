// #include<iostream>
// #include<fstream>
// using namespace std;
// // fstream
// // mode :  ios::app - add / write
// // mode :  ios::ate - read/ by pointer
// // mode :  ios::in - read / display
// // mode :  ios::out - write / create

// int main(){
//     fstream file;

//     file.open("file.txt",ios::ate);

//     // Show current position (should be at the end)
//     streampos endPos = file.tellp();
//     cout << "Initial position (end of file): " << endPos << endl;

//     // Move the pointer to the beginning
//     file.seekp(1, ios::beg);

//     // Write something at the beginning
//     file << "Hello, ";

//     file.close();

//     return 0;
// }

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{

    ofstream file;
    file.open("best.bin", ios::binary);

    int id = 124;
    string name = "Setha123";
    float salary = 1000;

    // Write the length of the name, then the name, then id and salary
    int nameLen = name.size();
    file.write(reinterpret_cast<char*>(&nameLen), sizeof(nameLen));
    file.write(name.c_str(), nameLen);
    file.write(reinterpret_cast<char*>(&id), sizeof(id));
    file.write(reinterpret_cast<char*>(&salary), sizeof(salary));

    file.close();

    ifstream file;
    file.open("best.bin", ios::binary);
    if (!file)
    {
        cerr << "Failed to open file.\n";
        return 1;
    }

    int nameLen;
    file.read(reinterpret_cast<char *>(&nameLen), sizeof(nameLen));
    string name(nameLen, '\0');
    file.read(&name[0], nameLen);

    int id;
    file.read(reinterpret_cast<char *>(&id), sizeof(id));

    float salary;
    file.read(reinterpret_cast<char *>(&salary), sizeof(salary));

    cout << name << " " << id << " " << salary << endl;

    return 0;
    // ...existing code...
}
