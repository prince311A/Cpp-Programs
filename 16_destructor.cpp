#include <iostream>
using namespace std;
class mca
{
    int p;

public:
    mca()
    {
        cout << "Default constructor is called" << endl;
    }
    mca(int x) : p(x)
    {
        cout << "The value of p is " << p << endl;
        cout << "Parameterised constructor is called" << endl;
    }
    ~mca()
    {
        cout << "The object destored and destructor is called" << endl;
    }
    // void fun1()
    // {
    //     mca w;
    //     cout << "fun1() is called" << endl;
    // }
};
int main()
{
    mca z, y(5);
    // y.fun1();
}