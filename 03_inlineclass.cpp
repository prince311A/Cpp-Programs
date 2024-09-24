#include<iostream>
using namespace std ;
class student {
public:
int a,b,c;
void getdata(int x);
void showdata();
};
void student :: getdata(int x){
  cout<<"The values is putted"<<endl;
    a = 15;
    b = 50;
    c = x;
}
 inline void student :: showdata(){
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
    cout<<"c = "<<c<<endl;
}
int main(){
    student p;
    p.getdata(4);
    p.showdata();
    return 0;
}