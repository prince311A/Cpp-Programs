#include<iostream>
using namespace std;
//*******************************************//
/* HIERARRICAL LEVEL
ONE SUPER CLASS AND
MANY SUBCLASSS 
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
    void getdata1(){
        cout<<"Enter the university code and university name"<<endl;
        cin>>unicode;
        fflush(stdin);
        gets(uniname);
        cout<<"Enter the dept id and dept name"<<endl;
        cin>>deptid;
        cin>>deptname;
        }
        
void showdata1(){
    cout<<"The university code is "<<unicode<<endl<<"And university name is "<<uniname<<endl;
    cout<<"The department id is "<<deptid<<endl<<"The department name is "<<deptname<<endl;
}
};
class student : public university{
    public:
    int studroll;
    char studname[50];
    void getdata2(){
        cout<<"Enter the university code and university name"<<endl;
        cin>>unicode;
        fflush(stdin);
        gets(uniname);
         cout<<"Enter the student roll and student name"<<endl;
        cin>>studroll;
        fflush(stdin);
        gets (studname);
    }
void showdata2(){
    cout<<"The university code is "<<unicode<<endl<<"And university name is "<<uniname<<endl;
    cout<<"The student roll number is "<<studroll<<endl<<"The student name is "<<studname<<endl;
    }

};
int main(){
    department p;
    student q;
    p.getdata1();
    q.getdata2();
    p.showdata1();
    q.showdata2();
    cout<<"Hava a good day";
}