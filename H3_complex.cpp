#include<iostream>
using namespace std;
class complex{
    int a;
    int b;
    public:
    void setdata(int v1,int v2){
        a = v1;
        b = v2;
    }
    void sumcomplex(complex o1,complex o2){
        a = o1.a + o2.a;
        b = o1.b + o2.b;
}
void displaydata(){
    cout<<""<<a<<" + "<<b<<"i"<<endl;
}
};
int main(){
    complex c1,c2,c3;
    c1.setdata(7,9);
    c1.displaydata();

    c2.setdata(5,6);
    c2.displaydata();

    c3.sumcomplex(c1,c2);
    c3.displaydata();
    return 0 ;
}