#include<iostream>
using namespace std;
int main(){
    system("cls");
    int op;
    float riel,amount,exchange;
    do{
        cout<<"Please choose an option."<<endl;
        cout<<"1 . Exchange Dollar to Riel."<<endl;
        cout<<"2 . Exchange Dollar to won."<<endl;
        cout<<"3 . Exchange Dollar to Baht."<<endl;
        cout<<"4 . Exchange Dollar to yen."<<endl;
        cout<<"5 . Exchange Dollar to yuan."<<endl;
        cout<<"0 . Exit"<<endl;
        cout<<"Choose option : ";cin>>op;
        
        switch (op){
            case 1 : {
                cout<<"How cost you want to exchange to riel :";cin>>exchange;
                riel = 4018;
                amount = exchange * riel;
                cout<<"Amount of exchange to riel : "<<amount<<" R"<<endl;
                break;
            }
            default :{
                cout<<"Invalid option. Please choose again."<<endl;
                break;
            }
        }

    }while(op != 0);
    return 0;
}