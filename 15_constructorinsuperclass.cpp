#include<iostream>
using namespace std;
class mca{
    public:
    int x;
   mca(){
    cout<<"Default constructor of MCA is called!!!!"<<endl;
    }
    mca (int a){
        x = a;
        cout<<"Parameterised contructor of MCA is called "<<x<<endl;
    }
    };
class bca : public mca{
    public:
    int y;
    bca(){
        cout<<"Default contructor of bca is called!!!"<<endl;
    }
    bca (int b,int a):mca(a){
        y = b;
        cout<<"Parameterised constructor of BCA is called "<<y<<endl;
    }
};
int main(){
    bca p;
    bca(5,10);
    return 0;
}