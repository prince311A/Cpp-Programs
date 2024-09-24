#include<iostream>
using namespace std;
class MCA{
int a,b;
public:
MCA(){ //// default constructor
    cout<<"Without Parameter"<<endl;
    a = 0;
    b = 0;
}
MCA(int x,int y){//// parameterised  constructor
    cout<<"With parameter"<<endl;
    a = x;
    b = y;
}
void showdata(){
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
}};
int main(){
    MCA o;
    o.showdata();
    MCA q(10,5);
    q.showdata();
    return 0 ;
    
}
