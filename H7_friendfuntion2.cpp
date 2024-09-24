#include<iostream>
using namespace std;
class Y; /// this is called forward declaration
class X{
    int data;
    public:
    void setdata(int value){
        data = value;
      }
    friend void sumxy(X,Y);
};
class Y{
    int data2;
    public:
    void setdata2(int value){
        data2 = value;
    }
     friend void sumxy(X,Y);
};
void sumxy(X o1,Y o2){
    cout<<"The sum of data and data1 is "<<o1.data + o2.data2<<endl;
}
int main(){
    X p;
    Y q;
    p.setdata(7);
    q.setdata2(10);
    sumxy(p,q);
    return 0;
    
}