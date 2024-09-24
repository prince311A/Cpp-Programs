#include<iostream>
using namespace std;
class MCA{
public:
int x;
void show(){
//  x = 20;// it print the value x = 20 not x = 10 
    cout<<"The value of x is "<<x<<endl;
}
};
int main(){
    MCA p;
    p.x = 10;
    MCA *ptr;
    ptr = &p;
    ptr ->show(); // by using pointer
    p.show(); // by using object

}