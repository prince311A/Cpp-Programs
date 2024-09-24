#include<iostream>
using namespace std;
class MCA{
    public:
    virtual void show() = 0;
   void display(){
        cout<<"This display of base class"<<endl;
    }
    void checkpurevitual(){
        cout<<"IT can be call by pointer of this class to object of derived class "<<endl;
    }
};
class BCA : public MCA{
    public:
    void show(){
        cout<<"This is show of derived class"<<endl;
    }
    void display(){
        cout<<"This display of derived class"<<endl;
    }
}; 
int main(){
    // MCA q; // cant create object because class has pure virtual function
    MCA *ptr;
    BCA q;
    ptr = &q;
    ptr->show();
    ptr->display();
    ptr->checkpurevitual();
    
    }