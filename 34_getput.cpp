#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;
int main(){
    fstream fs;
    fs.open("30_file.txt",ios::out);
    char name[80];
    cout<<"Enter the information"<<endl;
    cin>>name;
    int len = strlen(name);
    for(int i=0;i<len;i++){
        fs.put(name[i]);
    }
    fs.close();
    fs.open("30_file.txt",ios::in);
    cout<<"Information of the file ::"<<endl;
    char ch;
    fs.seekg(0,ios::beg);
    do{
        fs.get(ch);
        cout<<ch;
    }while(fs.eof()==0);

    return 0;
}