#include<iostream>
#include<fstream>
using namespace std;
int main(){
    char pri[25] = "\n both vandana don";
    // Another way to open the file by making object of fstream class
    fstream out;
    out.open("30_file.txt",ios::app);
    out<<pri;
    out.close();
    return 0;
}