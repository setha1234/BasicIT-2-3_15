// #include<iostream> 
// using namespace std;

// int ValueX(){
//     int X;// local variable
//     X = 10;
//     return X;
// }
// int ValueY(){
//     int Y;// local variable
//     Y = 20;
//     return Y;
// }
// float Sum(){
//     ValueX();
//     ValueY();
//     return ValueX() + ValueY();
// }
// int main(){
//     cout<<Sum();
// }



#include<iostream>
using namespace std;
// create a program for store item

string name;
int id,qty;
float price,tax,dis,pay;


void InputItem(){
    cout<<"Enter Item Name: ";
    cin>>name;
    cout<<"Enter Item ID: ";
    cin>>id;
    cout<<"Enter Item Quantity: ";
    cin>>qty;
    cout<<"Enter Item Price: ";
    cin>>price;
}

float CalTotal(){
    return qty * price;
}

float CalTax(){
    tax = 0.05;
    return CalTotal() * tax;
}

float CalDis(){
    float total = CalTotal();
    dis =   (total > 1   && total <=100 ) ? 10 :
            (total > 100 && total <= 200) ? 20 :
            (total > 200 && total <= 300) ? 30 : 
            (total > 300 && total <= 400) ? 40 : 
            (total > 400) ? 50 :
            0;
    return total * dis / 100;
}

float CalPay(){
    return CalTotal()-CalDis()+CalTax();
}

void DisplayItem(){
    cout<<"Item Name: "<<name<<endl;
    cout<<"Item ID: "<<id<<endl;
    cout<<"Item Quantity: "<<qty<<endl;
    cout<<"Item Price: $"<<price<<endl;
    cout<<"Total Price: $"<<CalTotal()<<endl;
    cout<<"Tax: $"<<CalTax()<<endl;
    cout<<"Discount: "<<CalDis()<<endl;
    cout<<"Payment: $"<<CalPay()<<endl;
    
}

int main(){
    system("cls");
    int options;
    do{
        cout<<"============[Please Choose an Option]================"<<endl;
        cout<<"1. Input Item"<<endl;
        cout<<"2. Display Item"<<endl;
        cout<<"0. Exit"<<endl;
        cout<<"Enter your choice: ";
        cin>>options;
        switch(options){
            case 1 : {
                cout<<"========================[Input Item]======================="<<endl;
                InputItem();
                break;
            }
            case 2 : {
                cout<<"========================[Display Item]======================="<<endl;
           
                DisplayItem();
                break;
            }
            case 0 : {
                cout<<"=========================Goodbye!======================="<<endl;
                return 0;
            }
        }

    }while(options != 0);

    return 0;

}