#include<iostream>
using namespace std;
class student
{
    public:
    int rn;
    float p;
    char n[20];
void getdata(){
    cout<<"Enter the NAME,ROLL,PERCENTAGE"<<endl;
    cin>>n;
    cin>>rn;
    cin>>p;
}
void showdata(){
    cout<<"NAME IS "<<n<<endl;
    cout<<"ROLL NO "<<rn<<endl;
    cout<<"PERCENTAGE  "<<p<<endl;

}

};
int main(){
  student p;
    cout<<"DETAILS"<<endl;
    p.getdata();
    p.showdata();
return 0;
}