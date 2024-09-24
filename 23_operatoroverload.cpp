#include <iostream>
using namespace std;
class MCA
{
    int p, q;

public:
    MCA(int x, int y) : p(x), q(y) {}
    void show()
    {
        cout << "The value of p is " << p << endl;
        cout << "The value of q is " << q << endl;
    }
    MCA operator+(MCA a);
    friend MCA operator-(MCA a, MCA b);
};
MCA MCA:: operator+(MCA a)
{
    MCA r(0,0);
    r.p = p + a.p;
    r.q = q + a.q;
    return (r);
}
MCA operator-(MCA a, MCA b)
{
    MCA r(0,0);
    r.p = a.p - b.p;
    r.q = a.q - b.q;
    return (r);
}
int main(){
    MCA u(10,20),v(5,10);
    MCA w(0,0);
    MCA z(0,0);
    w = u+v;
    w.show();
    z = u-v;
    z.show();
    
}