// #include<iostream>
// using namespace std;
// class Person{
//     private : 
//         string name;
//         int id;
//     public : 
//         Person(){
//            name = "Unknow";
//            id  = 0; 
//         }
//         Person(string n,int i){
//             this->name = n;
//             this->id   = i;
//         }
//         void setData(string n,int i){
//             this->name = n;
//             this->id  =i;
//         }
//         string getName(){
//             return name;
//         }
//         int getId(){
//             return id;
//         }


// };
// int main(){
//     // DataType NameArray[Size_Arr];
//     Person obj("Setha",101),obj1[5];
//     string user_name;
//     int user_id;
    
//     obj1[0].setData("Kaka",1);
//     obj1[1].setData("Sasa",2);
//     obj1[2].setData("Lala",3);

//     cout<<obj1[1].getName()<<endl;
//     cout<<obj1[0].getId()<<endl;
    
//     for(int i=0;i<5;i++){
//         cout<<"Enter name : ";cin>>user_name;
//         cout<<"Enter ID   : ";cin>>user_id;
//         obj1[i].setData(user_name,user_id);
//     }
//     for(int i=0;i<5;i++){
//         cout<<"Name : "<<obj1[i].getName()<<endl;
//         cout<<"ID   : "<<obj1[i].getId()<<endl;
//     }
//     return 0;
// }

#include<iostream>
#include<iomanip>
using namespace std;
class Cafe{
    private :
        // data members
        string name,type_of_coffee,create_at,quality,expiration_date;
        int code,quantity;
        float price;
    public :
        // Default Constructor
        Cafe(){
            name = "N/A";
            type_of_coffee = "N/A";
            create_at = "N/A";
            quantity = 0;
            quality = " N/A";
            expiration_date = "N/A";
            code = 0;
            price = 0.0;
        }
        Cafe(string n,string t,string c,string ql, string e,int i,int qt,float p){
            this->name = n;
            this->type_of_coffee = t;
            this->create_at = c;
            this->quality = ql;
            this->expiration_date = e;
            this->quantity = qt;
            this->code = i;
            this->price = p;
        }

        // method members : function

        void Header(){
            cout<<"============================================================================="<<endl;
            cout<<"Code"
                <<setw(12)<<"Name"
                <<setw(12)<<"Quantity"
                <<setw(12)<<"Type"
                <<setw(12)<<"Price"
                <<setw(12)<<"Quality"
                <<setw(12)<<"Exprie"
                <<setw(12)<<"Create At"
                <<endl;
            cout<<"============================================================================="<<endl;
                
        }

};


int main(){
    Cafe coffee[100];
    int choose;
    string n_coffee,t_coffee,create_coffee,ql_coffee,ex_coffee;
    int qt_coffee,c_coffee,n;
    float p_coffee;


    do{
        system("pause");
        system("clear");
        cout<<"|=============================================================================|"<<endl;
        cout<<"|                     Menu Store Coffee System                                |"<<endl;
        cout<<"|=============================================================================|"<<endl;
        cout<<"| 1. Input coffee detail.                                                     |"<<endl;
        cout<<"| 2. Output Coffee Detail.                                                    |"<<endl;
        cout<<"| 3. Search Coffee in Store.                                                  |"<<endl;
        cout<<"| 4. Update Coffee                                                            |"<<endl;
        cout<<"| 5. Sort Coffee                                                              |"<<endl;
        cout<<"| 0. Exit                                                                     |"<<endl;
        cout<<"|=============================================================================|"<<endl;
        cout<<"| => Please choose the option : ";cin>>choose;
        cout<<"|=============================================================================|"<<endl;
        switch(choose){
            case 1: {
                cout<<"|=============================================================================|"<<endl;
                cout<<"|                       Create Detail of Coffee                               |"<<endl;
                cout<<"|=============================================================================|"<<endl;
                cout<<"| Enter size for create the coffee : ";cin>>n;
                for(int i=0;i<n;i++){
                    cout<<"| Coffee #"<<i+1<<endl;
                    cout<<"| Enter code coffee : ";cin>>c_coffee;cin.ignore();
                    cout<<"| Enter name coffee : ";getline(cin,n_coffee);
                    cout<<"| Enter quantity    : ";cin>>qt_coffee;
                    cout<<"| Enter price       : ";cin>>p_coffee;
                    cout<<"| Enter quality     : ";cin.ignore();getline(cin,ql_coffee);
                    cout<<"| Enter type        : ";getline(cin,t_coffee);
                    cout<<"| Enter expire      : ";getline(cin,ex_coffee);
                    cout<<"| Enter create at   : ";getline(cin,create_coffee);
                    coffee[i] = Cafe(n_coffee,t_coffee,create_coffee,ql_coffee,ex_coffee,c_coffee,qt_coffee,p_coffee);
                    
                }
                cout<<"|=============================================================================|"<<endl;
                cout<<"|                               Successfully                                  |"<<endl;
                cout<<"|=============================================================================|"<<endl;
                
                break;
            }
        }

    }while(choose!=0);


    return 0;
}