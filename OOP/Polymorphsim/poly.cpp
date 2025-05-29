// #include<iostream>
// using namespace std;
// class Mom{
//     private : 
//         string name;
//         int age;
//     public : 
//         // overloading constructor
//         Mom(){
//             name = "UnKnow";
//             age = 0;
//         }
//         Mom(string n){
//             name = n;
            
//         }
//         Mom(int a){
//             age = a;
//         }
//         // overloading function
//         void Input(){  
//             cout<<"Enter name: ";cin>>name;
//             cout<<"Enter age : ";cin>>age;

//         }

//         void Input(int AGE){
//             cout<<"Enter name : ";cin>>name;
//             age = AGE;
//         }
//         void Input(string n)
//         {
//             name = n;
//             cout<<"Enter age : ";cin>>age;
//         }
//         void Display(){
//             cout<<"Name : "<<name<<endl;
//             cout<<"Age  : "<<age<<endl;
//         }
// };


// int main()
// {
//     Mom mom,mom1("koko"),mom2(17);
//     cout<<"Obj1 : "<<endl;
//     mom.Input();
//     mom.Display();
//     cout<<"Obj2 : "<<endl;
//     mom1.Input(32);
//     mom1.Display();
//     cout<<"Obj3 : "<<endl;
//     mom2.Input("MAMA");
//     mom2.Display();
// }





// #include<iostream>
// using namespace std;
// class Math{
//     private : 
//         int a = 0,b = 0;
//     public : 
//     // overloading operator is use name operator but symbol  id different
//         void operator +(){
//             a-= 10;
//         }
//         void operator -(){
//             b+=10;
//         }  
//         void display(){
//             cout<<"Result  a : "<<a<<endl;
//             cout<<"Result  b : "<<b<<endl;
//         }      
// };
// int main(){
//     Math m;
//     m.display();
//     +m;
//     m.display();
//     -m;
//     m.display();

//     return 0;
// }

#include<iostream>
using namespace std;
// override - 
class person{
    public :
        virtual void Greeting(){
            cout<<"Hello Everyone"<<endl;
        }
};
class employee :public person {
    public : 
        void Greeting() override {
            cout<<"Hi everyone"<<endl;
        }
};
int main(){
    employee p; 
    p.Greeting();
    return 0;
}











