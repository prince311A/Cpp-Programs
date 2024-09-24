#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int a,b,c;
    a=0;
    b=1;
    for(int i=0;i<=5;i++){
     // cout<<" anew = "<<a<<endl;
      //cout<<" bnew = "<<b<<endl;
        a= a+b;
       // cout<<"a = "<<a<<" b = "<<b<<" a+b = "<<a+b<<endl;
      //  cout<<"a = "<<a<<endl;
        b = a-b; 
        //  cout<<"a = "<<a<<" b = "<<b<<" a-b = "<<a-b<<endl;
        c = a+b;

    cout<<"\nThe number is "<<c<<endl;
    }
    int w,i;
    w = 5;
    i = 10;
    cout<<""<<w<<"X"<<""<<i<<"="<<w*i;

    getch();
}