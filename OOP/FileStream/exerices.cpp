#include<iostream>
#include<fstream>
using namespace std;
class Book{
    private:
        // data members
        string title,author,quality;
        int quantity,year,n;
        float price;
    public :
        // default constructor
        fstream file;
        Book(){
            title = "unknow";
            author = "unknow";
            quality = "unknow";
            quantity = 0;
            year = 0;
            price = 0.0;
        }
        // function / method members
        void Create_the_Book(){
            file.open("exercise.txt",ios::out);
            cout<<"Enter size for input the book : ";cin>>n;
            for(int i = 0 ;i<n;i++){
                cout<<"Enter the title    : ";cin>>title;
                cout<<"Enter the author   : ";cin>>author;
                cout<<"Enter the quality  : ";cin>>quality;
                cout<<"Enter the quantity : ";cin>>quantity;
                cout<<"Enter the price    : ";cin>>price;
                cout<<"Enter the year     : ";cin>>year;
                file<<"\t"<<title<<"\t"<<author<<"\t"<<quality<<"\t"<<quantity<<"\t"<<price<<"\t"<<year<<endl;
            }
            file.close();

        }
        void Menu(){
            int choose;
            do{
                cout<<"==================================================================================================="<<endl;
                cout<<"                                  System Books                                                     "<<endl;
                cout<<"==================================================================================================="<<endl;
                cout<<" 1. Create the book"<<endl;
                cout<<" 2. Display the book"<<endl;
                cout<<" 3. Add the book"<<endl;
                cout<<" 0. Exit Program"<<endl;
                cout<<" Please choose an option : ";cin>>choose;
                switch (choose){
                    case 1: {
                        // function create
                        Create_the_Book();
                        break;
                    }
                    case 2 : {
                        // display
                        break;
                    }
                    case 3 : {
                        // add 
                        break;
                    }
                    case 0 : {
                        cout<<"==================================================================================================="<<endl;
                        cout<<"                                      Bye Bye See you later"<<endl;
                        cout<<"==================================================================================================="<<endl;
                        break;
                    }
                }
            }while(choose != 0);
        }

};


int main(){
    Book obj;
    obj.Menu();

    return 0;
}