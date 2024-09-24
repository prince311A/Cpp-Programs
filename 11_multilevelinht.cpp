#include<iostream>
using namespace std;
//*******************************************//
/* MULTI LEVEL
ONE SUPER CLASS AND  SUBCLASS THEN
SUB-SUB CLASS
*/ 
class university{
    public:
    int unicode;
    char uniname[50];
};
class department : public university{
    public:
    char deptname[50];
    int deptid;
};
class student : public department{
    public:
    int studroll;
    char studname[50];
    void getdata(){
        cout<<"Enter the university code and university name"<<endl;
        cin>>unicode;
        fflush(stdin);
        gets(uniname);
        cout<<"Enter the dept id and dept name"<<endl;
        cin>>deptid;
        cin>>deptname;
         cout<<"Enter the student roll and student name"<<endl;
        cin>>studroll;
        fflush(stdin);
        gets (studname);
    }
void showdata(){
    cout<<"The university code is "<<unicode<<endl<<"And university name is "<<uniname<<endl;
    cout<<"The department id is "<<deptid<<endl<<"The department name is "<<deptname<<endl;
    cout<<"The student roll number is "<<studroll<<endl<<"The student name is "<<studname<<endl;
    }

};
int main(){
    student p;
    p.getdata();
    p.showdata();
    cout<<"Hava a good day";
}