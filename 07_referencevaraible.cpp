#include<iostream>
using namespace std;
class Rdemo{
    public:
    void fun1(int x,int y){
        int z;
        z = x;
        x = y;
        y = z;
cout<<"x = "<<x<<endl;
cout<<"y = "<<y<<endl;        
    }
    void fun2(int &x,int &y){
        int z;
        z = x;
        x = y;
        y = z;
        cout<<"x = "<<x<<endl;
cout<<"y = "<<y<<endl; 
    }
    };
int main(){
int a,b,c,d;
a = 5;
b = 10;
c = 15;
d = 20;
Rdemo p;
p.fun1(a,b);
//p.fun2(c,d);
 cout<<"a = "<<a<<endl;
 cout<<"b = "<<b<<endl;
//cout<<"c = "<<c<<endl;
 //cout<<"d = "<<d<<endl;


    return 0 ;
}