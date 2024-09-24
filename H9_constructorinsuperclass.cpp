#include <iostream>
using namespace std;
class base1
{
    int a;

public:
    base1(){
        cout<<"Default constructor of base1 is called"<<endl;
    }
    base1(int p)
    {
        a = p;
        cout << "The value of a is " << a << endl;
    }
};
class base2
{
    int b;

public:
 base2(){
        cout<<"Default constructor of base2 is called"<<endl;
    }
    base2(int q)
    {
        b = q;
        cout << "The value of b is " << b << endl;
    }
};
class derived : public base1, public base2
/*Here base1 is retured first so constructor
of base1 is called first
then constructor of base2 is called
IN CASE OF VIRTUAL BASE CLASS
constrctor of virtual class called first */
{
    int c, d;

public:
 derived(){
        cout<<"Default constructor of derived is called"<<endl;
    }
    derived(int p, int q, int r, int s) : base1(p), base2(q) // here prefernce doesnot matter
    {
        c = r;
        d = s;
        cout << "The value of c and d is " << c << " " << d << endl;
    }
};
int main()
{
    derived y;
    derived t(1, 2, 3, 4);
}
/*
Note:: In case of default constructor 
Every base class and derived class should have a default contructor if 
there is missing in any of them then compiler through error 
*/