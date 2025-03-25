/*
Create a program for store phone in stock // management

function loop switch case array
1. Create - code/id,name,descriptions,type,price,quantity
2. Display
3. Search [id,name]
4. Update
5. Delete
6. Insert
7. Sort [id,name]
8. Exit

*/
/*
Function : VOID
1.Non Return Function
    - Non-return function with non-parameter.
        void Function(){}
    - Non-return function with has parameter.
        void Function(int a,int b,...){}
2.Return Function
    - Return function with non-parameter.
        float Function(){

            return ...;
        }
    - Return function with has parameter.
        float Function(int a,int b,...){
            // code block
            return...;
        }

*/

#include <iostream>
#include <iomanip>
#include <strings.h>
using namespace std;
// Global Variables
int code[100], qty[100], Size;
string name[100], desc[100], type[100];
float price[100];
bool check;

// Function for creating stock phone
void CreateStockPhone()
{
    cout << "===========[Create Stock Phone]=============" << endl;
    cout << "Enter the number of phone you want to add : ";
    cin >> Size;
    for (int i = 0; i < Size; i++)
    {
        cout << "==========================================" << endl;
        cout << "Enter code of phone : ";
        cin >> code[i];
        cout << "Enter name of phone : ";
        cin >> name[i];
        cout << "Enter description of phone : ";
        cin >> desc[i];
        cout << "Enter type of phone : ";
        cin >> type[i];
        cout << "Enter price of phone : ";
        cin >> price[i];
        cout << "Enter quantity of phone : ";
        cin >> qty[i];
    }
    cout << "=====================[End Create]=====================" << endl;
}
// Function Display
void DisplayPhoneList()
{
    cout << "==============[Display Phone List]==============" << endl;
    cout << setw(12) << "Code"
         << setw(12) << "Phone Name"
         << setw(12) << "Description"
         << setw(12) << "Type"
         << setw(12) << "Price"
         << setw(12) << "Quantity"
         << endl;
    for (int i = 0; i < Size; i++)
    {
        cout << setw(12) << code[i]
             << setw(12) << name[i]
             << setw(12) << desc[i]
             << setw(12) << type[i]
             << setw(12) << price[i]
             << setw(12) << qty[i]
             << endl;
    }
    cout << "=====================[End Display]=====================" << endl;
}

// Function Search

void SearchPhone()
{
    int search, searchId,i;
	string search_name;
    check = true;
    cout<< "=================== [Search Phone] ====================" << endl;
    cout << "1. Search by id." << endl;
    cout << "2. Search by name." << endl;
    cout << "choose option for search :";
    cin >> search;
    switch (search)
    {
	    case 1:
	    {
	        cout << "=================== [Search] =================" << endl;
	        cout << "Enter the id of phone you want to search : ";
	        cin >> searchId; // 11
	        cout << "\t" <<setw(12) << "Code"
	                                    << setw(12) << "Phone Name"
	                                    << setw(12) << "Description"
	                                    << setw(12) << "Type"
	                                    << setw(12) << "Price"
	                                    << setw(12) << "Quantity"
	                                    << endl;
	        for (i = 0; i < Size; i++)
	        {
	            if (code[i] == searchId)
	            {
	                cout << "\t" << setw(12) << code[i]
	                        << setw(12) << name[i]
	                        << setw(12) << desc[i]
	                        << setw(12) << type[i]
	                        << setw(12) << price[i]
	                        << setw(12) << qty[i]
	                        << endl;
	                        check = false;
	                break;
	            }
	        }
	        if(check){
	        	cout<<"Not Found!!!"<<endl;
			}
	        break;
	    }
	    case 2 : {
	    	cout<<"====================[Search by Name]=======================\n";
	    	cout<<"Enter name for search :";cin>>search_name;
	    	
	    	for (i = 0;i<Size;i++){
	    		
	    		if(name[i]==search_name){
	    			cout << "\t" <<setw(12) << "Code"
	                            << setw(12) << "Phone Name"
	                            << setw(12) << "Description"
	                            << setw(12) << "Type"
	                            << setw(12) << "Price"
	                            << setw(12) << "Quantity"
	                            << endl;
	    			cout << "\t" << setw(12) << code[i]	
	                        << setw(12) << name[i]
	                        << setw(12) << desc[i]
	                        << setw(12) << type[i]	
	                        << setw(12) << price[i]
	                        << setw(12) << qty[i]
	                        << endl;
	                check = false;
	                break;
				}
			}
			if(check){
				cout<<"Not found!!!"<<endl;
			}
	    	
			break;
		}
    }
}

void UpdateDetail(){
	int update_detail,new_code,new_qty;
	string new_name,new_desc,new_type;
	float new_price;	 
	 cout<<"Enter code phone for update : ";cin>>update_detail;// 2
	 for(int i = 0;i<Size;i++){
	 	if(code[i]==update_detail){
	 		cout<<"Enter new code   : ";cin>>new_code;
	 		cout<<"Enter new name   : ";cin>>new_name;
	 		cout<<"Enter new price  : ";cin>>new_price;
	 		cout<<"Enter new type   : ";cin>>new_type;
	 		cout<<"Enter new Qty    : ";cin>>new_qty;
	 		cout<<"Enter new Description :";cin>>new_desc;
	 		code[i] = new_code;
	 		name[i] = new_name;
	 		price[i] = new_price;
	 		type[i] = new_type;
	 		qty[i] = new_qty;
	 		desc[i] = new_desc;
	 		cout<<"\n          Update Complate!          \n"<<endl;
		}
    }		
}


void DeletePhone(){
	int delete_phone;
	cout<<"Enter code phone for delete : ";cin>>delete_phone;
	for(int i=0;i<Size;i++){
		if(code[i]==delete_phone){// 
			for(int j=i;j<Size-1;j++){
				code[j]=code[j+1];
				name[j]=name[j+1];
				price[j]=price[j+1];
				qty[j]=qty[j+1];
				type[j]=type[j+1];
				desc[j]=desc[j+1];	
				cout<<"Delete Successfully!!"<<endl;
			}
			Size--;
			break;
		}
	}	
}

void AddPhone(){
	int add_size;// Declare new size
	cout<<"Enter size for add :";cin>>add_size; // input new size
	for(int i=Size;i<Size+add_size;i++){
	// add detail phone start Size stop Size + Add Size Example if Size start 10, new size 5
	// So in loop Start from 10, Stop 10 + 5 = 15
		cout << "==========================================" << endl;
        cout << "Enter code of phone : ";
        cin >> code[i];
        cout << "Enter name of phone : ";
        cin >> name[i];
        cout << "Enter description of phone : ";
        cin >> desc[i];
        cout << "Enter type of phone : ";
        cin >> type[i];
        cout << "Enter price of phone : ";
        cin >> price[i];
        cout << "Enter quantity of phone : ";
        cin >> qty[i];
	}
	// Add Size phone
	// Assignment operator 
	// example : 10 += 5; 10 = 10 + 5 => 10 = 15
	Size += add_size;
}

void Sort(){
	int op;
	check = false;
	cout<<"================================"<<endl;
	cout<<"1.Sort by code"<<endl;
	cout<<"2.Sort by name"<<endl;
	cout<<"Choose option for sort :";cin>>op;
	switch(op){
		case 1 : {
			for(int i=0;i<Size;i++){// 
				for(int j = i+1;j<Size;j++){// 
					if(code[i]>code[j]){
						swap(code[i],code[j]);
						swap(name[i],name[j]);
						swap(desc[i],desc[j]);
						swap(type[i],type[j]);
						swap(price[i],price[j]);
						swap(qty[i],qty[j]);
						check = true;
					}
				}
			}
			if(!check){
				cout<<"Sort is not complate."<<endl;
			}else{
				cout<<"Sort is Successfully"<<endl;
			}
			
			break;
		}
	}
}


int main()
{
    int choose;
    do
    {
        cout << "\n\tPhone Stock Management System\n";
        cout << "1. Create Stock.\n";
        cout << "2. Display Stock.\n";
        cout << "3. Search Phone.\n";
        cout << "4. Update Phone.\n";
        cout << "5. Delete Phone.\n";
        cout << "6. Insert Phone.\n";
        cout << "7. Sort.\n";
        cout << "0. Exit.\n";
        cout << "Enter your choice : ";
        cin >> choose;
        switch (choose)
        {
        case 0:
        {
            cout << "Goodbye!\n";
            break;
        }
        case 1:
        {
            CreateStockPhone();
            break;
        }
        case 2:
        {
            DisplayPhoneList();
            break;
        }
        case 3:
        {
            SearchPhone();
            break;
        }
        case 4 :{
        	UpdateDetail();
			break;
		}
		case 5 :{
			DeletePhone();
			break;
		}
		case 6:{
			AddPhone();
			break;
		}
		case 7:{
			Sort();
			break;
		}
        }

    } while (choose != 0);

    return 0;
}
