// * Create a program for calculate Rectangle 
// Delcare 2 variable to store value : width and height
// Rectangle of Area : (width * height)
// Rectangle of perimeter : (width + height) * 2
#include<iostream>
using namespace std;

void Rectangle(){
}

int main(){
	float width,height;
	float ptrW,*ptrH;
	
	cout<<"Enter the width of Rectangle  : ";cin>>width;
	cout<<"Enter the height of Rectangle : ";cin>>height;
	

	ptrH = &height;
	
	float area = (*ptrW * *ptrH);
	float perimeter = ((*ptrW + *ptrH) * 2);
	
	cout<<"PtrW = "<<ptrW<<endl;
	cout<<"Address PtrW = "<<&ptrW<<endl;
	cout<<"Rectangle of Area      = "<<area<<endl;
	cout<<"Rectangle of Perimeter = "<<perimeter<<endl;
	
	return 0;
	
}