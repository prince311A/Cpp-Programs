#include<iostream>
using namespace std;
// when no copy contructor founf,compiler supplies its own copy constructor
class number{
    int a ;
    public:
    number(){
        a = 69;
    }
    number(int num){
        a = num;
    }
    number(number &t){
        cout<<"jai ho"<<endl;
        a = t.a;
    }
    void show(){
        cout<<"The number is "<<a<<endl;
    }
};

int main(){
    number x(5),u;
    x.show();
  number y(u);
    y.show();




    return 0;

}