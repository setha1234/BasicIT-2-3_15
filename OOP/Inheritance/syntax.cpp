// Single Inheritance
// * class derived_class_name : access_modifier bass_classname {...};
// example
// #include <iostream>
// using namespace std;
// class Father{
//     public :
//         void Teasure(){
//             cout<<"I have a house"<<endl;
//             cout<<"I have some money"<<endl;
//         }
// };
// class Son : public Father{
//     public : 
//         void Greeting(){
//             cout<<"Hello  I am John Smith"<<endl;
//         }
// };
// int main(){
//     Son s;
//     s.Teasure();
//     s.Greeting();

//     return 0;
// }

// Mutiple Inheritance


#include <iostream>
using namespace std;
class Wife1{
    private: 
    string name;
    int  age;
    float Height;
    public : 
        float salary1 = 1000;
        void CreateDetailWife_1(){
            cout<<"Enter name first wife : ";cin>>name;
            cout<<"Enter age  first wife : ";cin>>age;
            cout<<"Enter Height first wife : ";cin>>Height;
        }
        void Display1(){
            cout<<"first Wife name : "<<name<<endl;
            cout<<"first wife age  : "<<age<<endl;
            cout<<"first wife height: "<<Height<<endl;
            cout<<"First wife salary : "<<salary1<<endl;
        }

};
class Wife2{
    private: 
    string username;
    int  age2;
    float Height2;
    public :
        float salary2 = 800;
        public:
        void CreateDetailWife2(){
            cout<<"Enter name Second wife : ";cin>>username;
            cout<<"Enter age  Second wife : ";cin>>age2;
            cout<<"Enter Height Second wife : ";cin>>Height2;
        
        }
        void Display2(){
            cout<<"Second Wife name : "<<username<<endl;
            cout<<"Second wife age  : "<<age2<<endl;
            cout<<"Second wife height: "<<Height2<<endl;
            cout<<"First wife salary : "<<salary2<<endl;
        }

};
class Husband : public Wife1, public Wife2{
    public : 
        void Result(){
            float result = salary1 + salary2;
            cout<<"My Result salary : "<<result <<endl;
        }
};
int main(){
    Husband sorin,pannya,panha,samol;
    sorin.CreateDetailWife_1();
    sorin.Display1();
    sorin.CreateDetailWife2();
    sorin.Wife2::Display2();
    

    return 0;
}