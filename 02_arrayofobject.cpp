#include<iostream>
using namespace std;
class student 
{
    public:
    int rn;
    float p;
    char n[20];
    void getdata(){
         cout<<"Enter the NAME,ROLL NO. AND PERCENTAGE"<<endl;
            cin>>n>>rn>>p;

    }
    void showdata(){
        cout<<"NAME IS "<<n<<endl;
        cout<<"ROLL No. "<<rn<<endl;
        cout<<"PERCENTAGE IS "<<p<<endl;
    }
};
int main(){
    student p[3];
    for(int i =0;i<3;i++){
         p[i].getdata();
    }

    for(int i = 0;i<3;i++){
         p[i].showdata();
    }    
   

    return 0;
}