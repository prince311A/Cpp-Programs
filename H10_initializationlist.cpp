#include <iostream>
using namespace std;
class MCA
{
    int p;
    int q;

public:
    // Basic method to initialization
    // MCA (int x,int y){
    //     p = x;   /// its normal way to assign the values
    // q =y;
    // }
    /**************MENTOSS METHOD************/
    // MCA (int x, int y): p(x),q(y)
    //  MCA (int x, int y): p(x),q(y+5)
    // MCA (int x, int y): p(x+8),q(y)
    //  MCA (int x, int y): p(x+y),q(y)
    MCA (int x, int y): p(x),q(y+p)        // imp
    // MCA (int x, int y): p(x+q),q(y) // invalid because p declare first 

    {
        cout << "The value of p is " << p << endl
             << "The value of q is " << q << endl;
    }
};
int main()
{
    MCA t(2, 5);
}