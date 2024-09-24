#include<iostream>
using namespace std;
class thisdemo{
    int x;
    int y;
    public:
    void get (int x,int y){
        this->x = x;
        this->y = y;
    }
    void show();
};
void thisdemo::show(){
    cout<<"The value of x is "<<x<<endl;
    cout<<"The value of y is "<<y<<endl;
}
int main (){
    thisdemo p;
    p.get(4,5);
    p.show();
}