#include<iostream>
using namespace std;
class Y;
class X{
    public:
    int a = 10;
    friend void swapvariable(X &,Y &);
};
class Y {
    public:
    int b = 20;
    friend void swapvariable(X &,Y &);
};
void swapvariabale(X &p,Y &q){
    int temp;
    temp =p.a;
    p.a =  q.b;
    q.b = temp;
}
int main(){
    X o1;
    Y o2;
    cout<<"The value of a and b before swap is "<<o1.a<<" and "<<o2.b<<endl;
    swapvariabale(o1,o2);
    cout<<"The value of a and b after swap is "<<o1.a<<" and "<<o2.b<<endl;


    return 0;
}