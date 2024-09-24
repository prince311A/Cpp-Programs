#include<iostream>
using namespace std;
class SDemo {
    int a;
    static int count ;
    public:
    void setdata(){
        cout<<"JAI HIND KI SENA"<<endl;
        count++;
    }
    void showcount(){
        cout<<"The value of count is "<<count<<endl;
    }

};
int SDemo ::count =100;
int main(){
    SDemo p,q,s;
    p.setdata();
    p.showcount();
    q.setdata();
    q.showcount();
    s.setdata();
    s.showcount();

    return 0;
}