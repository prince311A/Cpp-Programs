#include<iostream>
using namespace std;
class test{
private:
int x,y;
public:
int z;
void getdata(int a,int b) {
    x = a;
    y = b;
    cout<<"Enter z"<<endl;
    cin>>z;
}
void showdata(){
    cout<<"x = "<<x<<endl;
    cout<<"y = "<<y<<endl;
    cout<<"z = "<<z<<endl;
}
};
int main(){
    test p;
    p.getdata(45,55);
    p.showdata();
    return 0;
}