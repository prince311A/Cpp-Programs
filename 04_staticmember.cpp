#include <iostream>
using namespace std;
class student
{
public:
    static int x;
    int y;
    static void fun1();
    void fun2(){
        x=5;
    }
    
    void showdata()
    {
        cout<<"x = "<<x<<endl;
        cout<<"y = "<<y<<endl;
    }
    
    
};
 void student ::fun1()
{
    x = 4;
  //y = 20;
}
//  void student ::fun2(){
//     x =45;
//     y =55;

// }
int student ::x;
int main(){
student p;
// p.fun1();
// student::fun1();// static function can be call by class name//
p.fun2();
p.showdata();

    return 0 ;
}