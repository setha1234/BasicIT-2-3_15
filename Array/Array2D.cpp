//#include<iostream>
//using namespace std;
//int main(){
//	// Syntax Array 2D
//	// DataType Array[Size][Size];
//	int A[3][6];
//	// input value to variable 'A'
//	for(int i=0;i<3;i++){
//		for(int j=0;j<6;j++){
//			cout<<"Enter value : ";cin>>A[i][j];
//		}
//	}
//	// Output by loop
//	for(int i=0;i<3;i++){
//		cout<<"Slot : ["<<i<<"]";
//		for(int j=0;j<6;j++){
//			cout<<"\t a ["<<j<<"] = "<<A[i][j];
//		}
//		cout<<endl;
//	}
//	return 0;
//}


// * Create a hall for booked seat in movie



#include<iostream>
using namespace std;

const int ROWS     = 5; // const can not change value
const int COLUMNS  = 5;

void ViewSeat(char seat[ROWS][COLUMNS]){
	
	for(int i=0;i<ROWS;i++){
		for(int j=0;j<COLUMNS;j++){
			cout<<seat[i][j];
		}
		cout<<endl;
	}
}
void BookedSeat(char seat[ROWS][COLUMNS]){  
	int row,col;
	cout<<"Enter row seat   : ";cin>>row;
	cout<<"Entre col seat   : ";cin>>col;
	
	if(row>=0 && row<ROWS && col>=0 && col<COLUMNS){
		if(seat[row][col]=='0')	{
			seat[row][col]= 'X';
			cout<<"Complate seat!"<<endl;
		}else{
			cout<<"Seat is booked!"<<endl;
		}
	}else{
		cout<<"Invalid Seat.We have only [0-4]."<<endl;
	}
}
void Remove(char seat[ROWS][COLUMNS]){  
	int row,col;
	cout<<"Enter row seat   : ";cin>>row;
	cout<<"Entre col seat   : ";cin>>col;
	
	if(row>=0 && row<ROWS && col>=0 && col<COLUMNS){
		if(seat[row][col]=='X')	{
			seat[row][col]= '0';
			cout<<"Complate seat!"<<endl;
		}else{
			cout<<"Seat is booked!"<<endl;
		}
	}else{
		cout<<"Invalid Seat.We have only [0-4]."<<endl;
	}
}

int main(){
	char seat[ROWS][COLUMNS];
	int op;
	// change seat to 0
	for(int i=0;i<ROWS;i++){
		for(int j=0;j<COLUMNS;j++){ 
			seat[i][j]='0';
		}
	}
	do{
		cout<<"*********[Movie system seat]*************"<<endl;
		cout<<"[ 1. Views Seat"<<endl;
		cout<<"[ 2. Booked Seat"<<endl;
		cout<<"[ 3. Remove Seat"<<endl;
		cout<<"[ 0. Exit Program"<<endl;
		cout<<"[ => Choose an option : ";cin>>op;
		switch (op){
			case 0 :{
				cout<<"Exit Program"<<endl;
				break;
			}
			case 1 :{
				ViewSeat(seat);
				break;
			}
			case 2 :{
				BookedSeat(seat);
				break;
			}
		}
		
	}while(op != 0);
}








