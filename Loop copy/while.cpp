#include<iostream>
using namespace std;
int main(){
    // input name gender id course  in while loop
    int op,id,i=1;
    string name,course,gender;
    cout<<"Enter what you want for input :";
    cin>>op;

    while(i<=op){
        // input student details in while loop
        cout<<"\nEnter student "<<i<<" details:\n";
        cout<<"Name: "; cin>>name;
        cout<<"Gender: "; cin>>gender;
        cout<<"ID: "; cin>>id;
        cout<<"Course: "; cin>>course;

        i++;
    }



    return 0;
}