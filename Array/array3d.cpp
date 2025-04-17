#include<iostream>
using namespace std;

int main(){
    // Block Row Column
    // * DataType ArrayName[Block][Row][Column]

    // Example 
    int arr[2][3][5];

    // Input
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            for(int k=0;k<5;k++){
                cout<<"Enter the value of arr["<<i<<"]["<<j<<"]["<<k<<"] : ";
                cin>>arr[i][j][k];
            }
        }
    }
    
    // Output
    for(int i=0;i<2;i++){// Block
        for(int j=0;j<3;j++){// Row
            for(int k=0;k<5;k++){ // Column
                
                    cout<<arr[i][j][k]<<" ";
                
            } 
            cout<<endl;
        }
        cout<<endl;
    }

    return 0;
}