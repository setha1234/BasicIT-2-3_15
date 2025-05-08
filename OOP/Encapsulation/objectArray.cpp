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
        string getName(){
            return name;
        }
        string getType(){
            return type_of_coffee;
        }
        string getCreateAt(){
            return create_at;
        }
        string getQuality(){
            return quality;
        }
        string getExprie(){
            return expiration_date;
        }
        int getCode(){
            return code;
        }
        int getQuantity(){
            return quantity;
        }
        float getPrice(){
            return price;
        }
        // method members : function

        void Display(){
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

        void Menu(){
            
        }

};


int main(){
    Cafe coffee[100];
    int choose,op;
    string n_coffee,t_coffee,create_coffee,ql_coffee,ex_coffee;
    int qt_coffee,c_coffee,n;
    float p_coffee;

    system("pause");
    system("clear");
    do{
        
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
                    cout<<"|-----------------------------------------------------------------------------|"<<endl;
                    
                }
                cout<<"|=============================================================================|"<<endl;
                cout<<"|                               Successfully                                  |"<<endl;
                cout<<"|=============================================================================|"<<endl;
                
                break;
            }
            case 2 : {
                cout<<"|=============================================================================|"<<endl;
                cout<<"|                       Display Detail of Coffee                              |"<<endl;
                cout<<"|=============================================================================|"<<endl;
                coffee->Display();
                for(int i=0;i<n;i++){
                    cout<<coffee[i].getCode()
                        <<setw(12)<<coffee[i].getName()
                        <<setw(12)<<coffee[i].getQuantity()
                        <<setw(12)<<coffee[i].getType()
                        <<setw(12)<<coffee[i].getPrice()
                        <<setw(12)<<coffee[i].getQuality()
                        <<setw(12)<<coffee[i].getExprie()
                        <<setw(12)<<coffee[i].getCreateAt()
                        <<endl;
                }

                break;
            }
            case 3 : {
                do{
                    cout<<"|=============================================================================|"<<endl;
                    cout<<"|                           Search Coffee                                     |"<<endl;
                    cout<<"|=============================================================================|"<<endl;
                    cout<<"| 1. Search by name "<<endl;
                    cout<<"| 2. Search by id"<<endl;
                    cout<<"| 3. Search by type"<<endl;
                    cout<<"| 0. Back to menu"<<endl;
                    cout<<"| => choose option : ";cin>>op;
                    switch(op){
                        case 1 : {
                            string search_name;
                            cout<<"Eneter name of coffee : ";cin>>search_name;
                            for(int i=0;i<n;i++){
                                if(search_name == coffee[i].getName()){
                                    cout<<"| Name     : "<<coffee[i].getName()<<endl;
                                    cout<<"| ID       : "<<coffee[i].getCode()<<endl;
                                    cout<<"| Qty      : "<<coffee[i].getQuantity()<<endl;
                                    cout<<"| Quality  : "<<coffee[i].getQuality()<<endl;
                                    cout<<"| Type     : "<<coffee[i].getType()<<endl;
                                    cout<<"| Price    : "<<coffee[i].getPrice()<<endl;
                                    cout<<"| Expire   : "<<coffee[i].getExprie()<<endl;
                                    cout<<"| Create at: "<<coffee[i].getCreateAt()<<endl;
                                }
                            }

                            break;
                        }
                        case 2:{
                            int search_id;
                            cout<<"Eneter name of coffee : ";cin>>search_id;
                            for(int i=0;i<n;i++){
                                if(search_id == coffee[i].getCode()){
                                    cout<<"| Name     : "<<coffee[i].getName()<<endl;
                                    cout<<"| ID       : "<<coffee[i].getCode()<<endl;
                                    cout<<"| Qty      : "<<coffee[i].getQuantity()<<endl;
                                    cout<<"| Quality  : "<<coffee[i].getQuality()<<endl;
                                    cout<<"| Type     : "<<coffee[i].getType()<<endl;
                                    cout<<"| Price    : "<<coffee[i].getPrice()<<endl;
                                    cout<<"| Expire   : "<<coffee[i].getExprie()<<endl;
                                    cout<<"| Create at: "<<coffee[i].getCreateAt()<<endl;
                                }
                            }

                            break;
                        }
                        case 3 : {
                            string search_type;
                            cout<<"Eneter name of coffee : ";cin>>search_type;
                            for(int i=0;i<n;i++){
                                if(search_type == coffee[i].getType()){
                                    cout<<"| Name     : "<<coffee[i].getName()<<endl;
                                    cout<<"| ID       : "<<coffee[i].getCode()<<endl;
                                    cout<<"| Qty      : "<<coffee[i].getQuantity()<<endl;
                                    cout<<"| Quality  : "<<coffee[i].getQuality()<<endl;
                                    cout<<"| Type     : "<<coffee[i].getType()<<endl;
                                    cout<<"| Price    : "<<coffee[i].getPrice()<<endl;
                                    cout<<"| Expire   : "<<coffee[i].getExprie()<<endl;
                                    cout<<"| Create at: "<<coffee[i].getCreateAt()<<endl;
                                }
                            }
                            break;
                        }
                    }
                }while(op!=0);
                break;
            }
            case 4 : {
                int update_by_code;
                cout<<"Enter code coffee for update : ";cin>>update_by_code;
                for(int i=0;i<n;i++){
                    if(update_by_code==coffee[i].getCode()){
                        cout<<"| Coffee #"<<i+1<<endl;
                        cin.ignore();
                        cout<<"| Enter name coffee : ";getline(cin,n_coffee);
                        cout<<"| Enter quantity    : ";cin>>qt_coffee;
                        cout<<"| Enter price       : ";cin>>p_coffee;
                        cout<<"| Enter quality     : ";cin.ignore();getline(cin,ql_coffee);
                        cout<<"| Enter type        : ";getline(cin,t_coffee);
                        cout<<"| Enter expire      : ";getline(cin,ex_coffee);
                        cout<<"| Enter create at   : ";getline(cin,create_coffee);
                        coffee[i] = Cafe(n_coffee,t_coffee,create_coffee,ql_coffee,ex_coffee,c_coffee,qt_coffee,p_coffee);
                        cout<<"|-----------------------------------------------------------------------------|"<<endl;
                    }
                }
                break;
            }
            case 5 : {
                int sort_detail;
                cout<<"| 1. Sort by id [ 1 - 100 ]"<<endl;
                cout<<"| 2. Sort by id [ 100 - 1]"<<endl;
                cout<<"| 3. Sort by name [A-Z]"<<endl;
                cout<<"| 4. Sort by name [Z-A]"<<endl;
                cout<<"| => Chose for sort : ";cin>>sort_detail;
                switch (sort_detail)
                {
                case 1:{
                    for(int i=0;i<n;i++){
                        for(int j=i+1;j<n;j++){
                            if(coffee[i].getCode()>coffee[j].getCode()){
                                swap(coffee[i],coffee[j]);
                            }
                        }
                    }
                    break;
                }
                case 2 : {
                    for(int i=0;i<n;i++){
                        for(int j=i+1;j<n;j++){
                            if(coffee[i].getCode()<coffee[j].getCode()){
                                swap(coffee[i],coffee[j]);
                            }
                        }
                    }
                    break;
                }
                case 3 : {
                    for(int i=0;i<n;i++){
                        for(int j=i+1;j<n;j++){
                            if(coffee[i].getName()>coffee[j].getName()){
                                swap(coffee[i],coffee[j]);
                            }
                        }
                    }
                    break;
                }
                case 4 : {
                    for(int i=0;i<n;i++){
                        for(int j=i+1;j<n;j++){
                            if(coffee[i].getName()<coffee[j].getName()){
                                swap(coffee[i],coffee[j]);
                            }
                        }
                    }
                    break;
                }
            }
        }

    }while(choose!=0);


    return 0;
}