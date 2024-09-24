#include<iostream>
using namespace std;
int main(){
    char name[7];
    cout<<"Enter the string for print"<<endl;
    for(int i=0;i<=6;i++){
        cin>>name[i];
    }
    cout<<"The output is here!!"<<endl;
    for(int i=0;i<=6;i++){
        cout<<name[i]<<endl;
    }
    return 0;
}