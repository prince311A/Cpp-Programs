#include<iostream>
using namespace std;
class bankdeposit{
    int principle;
    int years;
    float interestrate;
    float returvalue;
    public:
    bankdeposit(){}
    bankdeposit(int p,int y,float r);
    bankdeposit(int p,int y,int r);
    void showreturnvalue();
};
bankdeposit :: bankdeposit(int p,int y,float r){
    principle = p;
    years = y;
    interestrate = r;
    returvalue = principle;
    for(int i = 0;i < y; i++){
        returvalue = returvalue * (1+r);
    }
}
bankdeposit :: bankdeposit(int p,int y,int r){
    principle = p;
    years = y;
    interestrate = (float)r/100;
    returvalue = principle;
    for(int i = 0;i < y; i++){
        returvalue = returvalue * (1+interestrate);
    }
}
void bankdeposit :: showreturnvalue(){
    cout<<"The amount of principle is "<<principle<<
    "of "<<years<<"with intrest rate "<<interestrate<<
    "in total is "<<returvalue;
}
int main(){
bankdeposit d1,d2,d3;
int p,y,R;
float r;
cout<<endl<<"Enter the principle amount,years and interest rate"<<endl;
cin>>p>>y>>r;
d1 = bankdeposit(p,y,r);
d1.showreturnvalue();
 cout<<endl<<"Enter the principle amount,years and interest rate"<<endl;
 cin>>p>>y>>R;
 d2 = bankdeposit(p,y,R);
 d2.showreturnvalue();


    return 0 ;
}
