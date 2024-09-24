#include<iostream>
using namespace std;
class MCA{
    public:
    virtual void show(){
        cout<<"This is show of base class"<<endl;
    }
     void display(){
        cout<<"This display of base class"<<endl;
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
    MCA p,*ptr;
    BCA q;
    ptr = &q;
    // BEFORE MAKING VIRTUAL CLAS
    ptr->show(); // base class
    ptr->display(); // base class
    // AFTER MAKING VIRTUAL CLASS
    ptr->show(); // derived class
    ptr->display(); // base class 
    
}
