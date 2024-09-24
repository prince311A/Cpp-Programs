#include <iostream>
using namespace std;
class BC
{
public:
    int x;
    void show()
    {
        cout << "1 The value of x is " << x << endl;
    }
};
class DC : public BC
{
public:
    int y;
    void show()
    {
        cout << "2 The value of y is " << y << endl;
    }
    void fun1()
    {
        cout << "This is fun()1" << endl;
    }
};
int main()
{
    BC p;
    //  p.x = 10; //valid
    DC q;
    q.y = 15;
    BC *pptr;
   // pptr = &p;
   // pptr->x = 10; // same valid
    // pptr->y = 15; // cant because pointer can access only member of pointer class means class BC
   // pptr->show();
   pptr = &q;
    // pptr->y; // valid if pointer is of DC class
  //  pptr->show(); // give garbage value because of first call the super class function
                  // pptr -> fun1(); // not accessible because pointer access only overridden function
                  // to access the function of subclass by pointer we use
    // (DC * (pptr))->show();
    // DC p,*ptr;
    // ptr = &p;
    // ptr->x = 10;
    // ptr->y = 15;
    // ptr ->fun1();
    // ptr->show();
    // ptr->show1();
}