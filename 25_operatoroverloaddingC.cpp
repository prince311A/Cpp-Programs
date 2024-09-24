#include<iostream>
using namespace std;
class MCA{
    int x;
    public:
    MCA(int a):x(a){}
    void show(){
        cout<<"The value of x is "<<x<<endl;
    }
    int operator > (MCA p);
    friend int operator < (MCA p,MCA q);
};
int MCA :: operator > (MCA p){
    if (x>p.x){
        return(1);
    }
    else{
        return(0);
    }
}
int operator < (MCA p,MCA q){
    if(p.x<q.x){
        return(1);
    }
    else{
        return(0);
    }
}
int main(){
    MCA Z(15);
    MCA W(10);
    printf("%d",Z>W);
   printf("\n%d",Z<W);

}