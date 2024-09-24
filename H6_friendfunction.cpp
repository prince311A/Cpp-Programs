#include<iostream>
using namespace std;
class complex;
class calculator{
    public:
    void fun1(complex);

};
class complex{
    int a;
    int b;
    public:
    friend void calculator :: fun1(complex); // this is also valid
   // friend class calculator; // this is also valid
    void showdata(){
        a = 10;
        b = 50;
        cout<<"The value of a is "<<a<<endl;
        cout<<"The value of b is "<<b<<endl;
    }

};
void calculator :: fun1(complex p){
  p.a = 30;
   p.b = 45;
   int s;
   s = p.a +p.b;
   cout<<"The sum of a and b is "<<s<<endl;
}

int main(){
complex s;
 calculator q;
 q.fun1(s);
s.showdata();
    return 0;
}