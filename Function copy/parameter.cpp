#include<iostream>
using namespace std;
void Header(){
    cout<<"============================================================================"<<endl;
    cout<<"                        Grocery Store Inventory                             "<<endl;
    cout<<"============================================================================"<<endl;
    cout<<"ID\tName\tPrice\tQuantity\tDiscount(%)\tTotal\tPayment"<<endl;
    cout<<"----------------------------------------------------------------------------"<<endl;
}
// Function : Non Return Parameters

void Display(int id,string name,float price,int qty,int dis){
    float total,payment;
    total = price * qty;
    payment = total - (total * dis)/100;  
    cout<<id<<"\t"<<name<<"\t$"<<price<<"\t"<<qty<<"\t\t"<<dis<<"%\t\t$"<<total<<"\t$"<<payment<<endl;
    cout<<"----------------------------------------------------------------------------"<<endl;
}

int main(){
    Header();
    Display(101,"Coca",10,20,10);
    cout<<endl;
    Display(102,"Pepsi",5,20,20);
    cout<<endl;
    Display(103,"Sprite",8,30,5);
    cout<<endl;
    Display(104,"Fanta",7,15,15);
    cout<<endl;
    return 0;
}