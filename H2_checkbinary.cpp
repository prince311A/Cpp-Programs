#include<iostream>
#include<string>
using namespace std;
class binary{
    string p;
    public:
   void getbinary();
   void checkbinary();
   void complement();
   void showbinary();

};
void binary::getbinary(){
    cout<<"Enter the binary number"<<endl;
    cin>>p;
}
void binary::checkbinary(){
    for(int i=0;i< p.length();i++){
    if(p.at(i) != '0' && p.at(i) != '1'){
        cout<<"This is not a binary number"<<endl;
       exit(0); // means exit the function

    }
    
}
}
void binary::complement(){
    for(int i=0;i< p.length();i++){
    if(p.at(i) == '0'){
        p.at(i) = '1';
        }
else if(p.at(i) == '1'){
    p.at(i) = '0';
}

    }
}
void binary::showbinary(){
    for(int i = 0;i < p.length();i++){
        cout<<p.at(i);
    }
    cout<<endl;
}
int main(){
    binary q;
    q.getbinary();
    q.checkbinary();
    q.showbinary();
    q.complement();
    q.showbinary();
    return 0;
}
