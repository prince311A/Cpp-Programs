#include<iostream>
using namespace std;
class MCA{
    int a;
    int b;
    public:
    void setdata(int x,int y){
        a = x;
        b = y;

    }
    void showdata(){
        cout<<"The value of a is "<<a<<endl;
        cout<<"The value of b is "<<b<<endl;
    }
    friend void fun1(MCA t);
};
void fun1(MCA t){
//    MCA t; // this is also valid 
    t.a = 10;
    t.b = 50;
    t.showdata();
    cout<<"This is friend function"<<endl;
}
int main(){
    MCA p,q;
    p.setdata(4,5);
    p.showdata();
    fun1(q);
    return 0;
}