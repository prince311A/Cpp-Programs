#include<iostream>
using namespace std;
int main(){
    string name[10];
    cout<<"Enter the 10 name of students"<<endl;
    for(int i=0;i<=9;i++){
        cin>>name[i];
    }
    int a=0;
    cout<<"The students name are:"<<endl;
      for(int i=0;i<=9;i++){
        cout<<a+1<<"."<<name[i]<<endl;
        a++;
    }
    return 0;

}