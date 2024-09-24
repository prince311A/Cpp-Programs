#include<iostream>
using namespace std;
class MCA{
    int x;
    int y;
    public:
    MCA(int a,int b):x(a),y(b){}
    void show(){
        cout<<"The value of x is "<<x<<endl;
        cout<<"The value of y is "<<y<<endl;
    }
    void operator ++ ();
    friend void operator -- (MCA &P);
};
void MCA :: operator++ (){
    ++x;
    ++y;
}
void operator -- (MCA &P){
    --P.x;
    --P.y;
}
int main(){
    MCA u(5,10);
    MCA v(19,11);
    ++u;
//u.show();
    --v;   //?NOT DECREMENTING WHY??
    //ANS)) because didnot use & in passing object
    v.show();

}