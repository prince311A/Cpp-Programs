#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int main(){
int number;
srand(time(0));
number = rand()%89 +1;
cout<<"The Random Number is "<<number<<endl;
return 0;
}

