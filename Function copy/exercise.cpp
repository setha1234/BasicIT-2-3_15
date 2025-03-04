#include<iostream>
using namespace std;

int id;
char grade;
string name,gender;
float s1,s2,s3,s4,s5,s6,s7,s8,s9,s10,total,average;

float InputScore(string Sname,int Sid,string Sgender,float Ss1,float Ss2,float Ss3,float Ss4,float Ss5,float Ss6,float Ss7,float Ss8,float Ss9,float Ss10){
    name = Sname;
    id = Sid;
    gender = Sgender;
    s1 = Ss1;
    s2 = Ss2;
    s3 = Ss3;
    s4 = Ss4;
    s5 = Ss5;
    s6 = Ss6;
    s7 = Ss7;
    s8 = Ss8;
    s9 = Ss9;
    s10 = Ss10;
}

float TotalScore(){
    total = s1 + s2 + s3 + s4 + s5 + s6 + s7 + s8 + s9 + s10;
 
}

float AverageScore(){
    average = total / 10;
}

void GradeStudent(){
    grade = (average > 90 && average <= 100) ? 'A' :
            (average > 80 && average <= 90) ? 'B' :
            (average > 70 && average <= 80) ? 'C' :
            (average > 60 && average <= 70) ? 'D' : 
            (average > 50 && average <= 60) ? 'E' :
            'F';
}

void Header(){
    
    cout << "\t\t\tStudent Information\n";
    cout << "-------------------------------------------------------\n";
    cout << "ID\tName\tGender\tScore1\tScore2\tScore3\tScore4\tScore5\tScore6\tScore7\tScore8\tScore9\tScore10\tTotal\tAverage\tGrade"<<endl;
    cout << "-------------------------------------------------------\n";

}

void DisplayStudent(){
    TotalScore();
    AverageScore();
    GradeStudent();
    cout << id << "\t" << name << "\t" << gender << "\t" << s1 << "\t" << s2 << "\t" << s3 << "\t" << s4 << "\t" << s5 << "\t" << s6 << "\t" << s7 << "\t" << s8 << "\t" << s9 << "\t" << s10 << "\t" << total << "\t" << average << "\t" << grade << endl;



}

int main(){
    int Id;
    string Name,Gender;
    float S1,S2,S3,S4,S5,S6,S7,S8,S9,S10;
    
    cout << "Enter the ID of students: ";
    cin >> Id;
    cout << "Enter the name of students: ";
    cin >> Name;
    cout << "Enter the gender of students: ";
    cin >> Gender;
    cout << "Enter the score 1 of students : ";
    cin >> S1 ;
    cout << "Enter the score 2 of students : ";
    cin >> S2 ;
    cout << "Enter the score 3 of students : ";
    cin >> S3 ;
    cout << "Enter the score 4 of students : ";
    cin >> S4 ;
    cout << "Enter the score 5 of students : ";
    cin >> S5 ;
    cout << "Enter the score 6 of students : ";
    cin >> S6 ;
    cout << "Enter the score 7 of students : ";
    cin >> S7 ;
    cout << "Enter the score 8 of students : ";
    cin >> S8 ;
    cout << "Enter the score 9 of students : ";
    cin >> S9 ;
    cout << "Enter the score 10 of students : ";
    cin >> S10 ;

    
    InputScore(Name, Id, Gender, S1, S2, S3, S4, S5, S6, S7, S8, S9, S10);
    Header();
    DisplayStudent();

    return 0;
    


}