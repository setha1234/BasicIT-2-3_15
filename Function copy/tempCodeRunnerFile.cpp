void Display(int id,string name,float price,int qty,int dis){
    float total,payment;
    total = price * qty;
    payment = total - (total * dis)/100;  
    cout<<id<<"   "<<name<<"    $"<<price<<"   "<<qty<<"    "<<dis<<"%   $"<<total<<"   $"<<payment<<endl;
    cout<<"--------------------------------------"<<endl;
}