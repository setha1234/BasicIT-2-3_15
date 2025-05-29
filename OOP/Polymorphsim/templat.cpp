// * template : 2 
// Function Template 
// Class Template
#include<iostream>
using namespace std;
// Function template
template <typename I,typename S>
class Person{
    private : 
        I A;
        S B;
    public : 
        void setData(int a,int b){
            A = a;
            B = b;
        }
        I getData(I p){
            return p;
        }
        S getData(S p){
            return p;
        }
};
int main(){
    Person <int,char*>p;   
    cout<<p.getData(123.323)<<endl;
    cout<<p.getData("Koo")<<endl;
   
    return 0;
}

