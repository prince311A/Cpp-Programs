#include<iostream>
using namespace std;
class A{
    public:
    int a;
  void show(){
        cout<<"The value of a is "<<a<<endl;
    }
};
class B:public A{
    int b;
    public:
    void get(int p,int q){
        b = p;
        a = q;
    }
    void show (){
        cout<<"The value of b is "<<b<<endl;
    }
};
int main(){
    B s;
    s.get(5,4);
    s.show();
    // s.A::show();



}