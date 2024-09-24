#include<iostream>
using namespace std;
int main(){
    int n;
    int rem,c,x;
    x = 0;
     cout<<"Enter the number\n";
     cin>>n;
    for(int i=101;i<=999;i++){
    do{
    rem = i%10;
    i= i/10;
   // cout<<rem;
    c = rem*rem*rem;
    x = x+c;
    }while(i!=0);
    
     cout<<endl<<x;
     cout<<endl<<n;
    }
     
    // if(n==x){
    //         cout<<"\nThe number is armstrong";
    //     }
    //     else{
    //         cout<<"\nThe number is NOT"; 
    

    //     }
}