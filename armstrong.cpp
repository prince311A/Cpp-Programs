#include<iostream>
using namespace std;
int main(){
    int n;
    int rem,c,x;
    x = 0;
    int k =0;
    cout<<"Enter the number\n";
    cin>>n;
    do{
        if (n==x){
            k =1;
        }
    rem = n%10;
    n= n/10;
    cout<<rem;
    c = rem*rem*rem;
    x = x+c;
    }while(n!=0);
    
     cout<<endl<<x;
     cout<<endl<<n;
     
    if(k==1){
            cout<<"\nThe number is armstrong";
        }
        else{
            cout<<"\nThe number is NOT"; 
    

        }
}