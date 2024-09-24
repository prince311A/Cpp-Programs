#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
int rn;
// char name[30];
string name;
name ="PRINCE TIWARI";
float percent;
cout<<"Enter the RollNo,Name and Percent of the Student:"<<endl;
cin>>rn>>percent;
ofstream out;
out.open("30_file.txt");
out<<rn<<endl;
 out<<name<<endl;
out<<percent<<endl;
out.close();
ifstream in;
in.open("30_file.txt");
// int ron;
// char nam[30];
// float perct;
// in>>ron<<endl;
// in>>nam<<endl;
// in>>perct<<endl;
char line[80];
int n=80; //Not working
do{
    in.getline(line,n);
    cout<<line<<endl;
}while(in.eof()==0);
// Both are valid //
// string line;
// do{
//    getline(in,line);
//     cout<<line<<endl;
// }while(in.eof()==0);
return 0;
}