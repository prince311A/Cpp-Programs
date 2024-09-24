#include <iostream>
using namespace std;
// ******************************************************************************************************
// class APS{
//     public:
//     int rn;
//     char name[25];
//     float per ;
//     void getdata();
//     void showdata();
// };
//  void APS::getdata(){
//     cout<<"Enter info"<<endl;
//     cin>>rn>>name>>per;
//  }
//  void APS::showdata(){
//     cout<<"rll no "<<rn<<endl<<"name: "<<name<<endl<<"percent "<<per<<endl;
//  }
//  int main(){
//     APS P[3];
//     for(int i=0;i<3;i++){
//     P[i].getdata();
//     }
//     for(int i=0;i<3;i++){
//     P[i].showdata();
//     }
//  }
// ***************************************************************************************
// class APS{
//     public:
//     static int a;
//     static int count;
//     int b;
//     static void fun1();
//     void fun2(){
//          a =10;
//         b = 20;
//         count++;
//     }
//     void showdata(){
//         cout<<"a = "<<a<<endl;
//         cout<<"b = "<<b<<endl;
//         cout<<"count = "<<count<<endl;
//     }
//     };
//     int APS::a;
//     int APS::count=100;
//   void APS::fun1(){
//         a =200;
//         count++;
//         // b = 10;// invalid
//     }
//     int main(){
//         APS P,q;
//         P.fun1();
//         P.showdata();
//         q.fun2(); // cant access b because static fun cant access not static data
//         q.showdata();
//         // q.fun2();
//         // q.showdata();
//         // P.fun1();
//     }
// ***************************************************************************************************
// class APS{
//     int a,b=20;
//     public:
//     APS(){
//       cout<<"default"<<endl;
//         a =15;
//     }
//     APS(APS &p){
//         a = p.a;
//         b =p.b;
//     }
//    void showdata(){
//         cout<<"a = "<<a<<endl;
//         cout<<"b = "<<b<<endl;
//     }
// };
// int main(){
//     APS p;
//     APS Q(p);
//    Q.showdata();
//    p.showdata();
// }
// // *******************************************************************************************************
// class APS{
//     int a,b;
//     public:
//     friend void fun1(APS p);
//     void showdata(){
//         cout<<"a= "<<a<<endl<<"b = "<<b<<endl;
//     }
// };
// void fun1(APS p){
//  p.a= 15;
//  p.b = 12;
//  p.showdata();
// }
// int main(){
//     APS p;
//     fun1(p);
//     // p.showdata();// caall this under the function
// }
// *****************************************************************************************************
// class APS{
//     int x =15;
//     public:
//     void bca(int x){
//         this->x=x;
//     }
//     void show(){
//         cout<<"x = "<<x<<endl;
//     }
// };
// int main(){
//     APS P;
//     APS *ptr;
//     ptr =&P;
//     ptr->bca(25);
//     ptr->show();
// }
// ***************************************************************************************************
// class BC
// {
// public:
//     int x;
//    void show()
//     {
//         cout << "x =" << x << endl;
//     }
//     void fun1()
//     {
//         cout << "hello";
//     }
// };
// class DC : public BC
// {
// public:
//     int y;
//    void show()
//     {
//         cout << "y =" << y << endl;
//     }
// };
//  int main()
//  {
// // BC pointer-> BC object
//     // BC *ptr;
//     // BC p;
//     // ptr = &p;
//     // ptr->x = 10;
//     // ptr->show1();
//     // ptr->fun1();
// //  BC pointer-> DC object
//     BC *ptr;
//     DC q;
//     ptr = &q;
//     ptr->x =10;//access
//     ptr->show();//access
   // ptr->y=10;//cant access
   // ptr->show2();//cant access
// DC pointer-> DC object
    // DC *ptr;
    // DC p;
    // ptr =&p;
    // ptr->x=10;
    // ptr->y= 20;
    // ptr->show1();
    // ptr->show2();
    // ptr->fun1();
// DC pointer-> BC object
// DC *ptr;
// // BC p;
// // ptr = &p;
// ptr->x=10;
// ptr->show1(); /// access all without making objects
//  }
// ******************************************************************************************************
// class APS{
//     public:
//     int x,y;
//     void setdata(){
//         x =20;
//     }
//     void showdata(){
//         cout<<"x = "<<x<<endl;
// cout<<"y = "<<y<<endl;
//     }
// };
// inline void fun1(APS p){
//     p.y =10;
//     p.showdata();
// }
// int main(){
//    APS p;
//    p.setdata();
//    fun1(p); 
// }
// ******************************************************************************************
// inline void aps(){
//     cout<<"The is inline function"<<endl;
// }
// int main(){
//     aps();
// }
// ******************************************************************************************
// class aps{
//     private:
//     int x,y;
//     public:
// void fun1(int x,int y){
//     int z;
//     z = x;
//     x = y;
//     y = z;
// }
// void fun2(int &x,int &y){
//     int z;
//     z = x;
//     x = y;
//     y = z;
//     }
// };
//     int main(){
//         aps p;
//         int a,b;
//         a = 10;
//         b = 20;
//         p.fun1(a,b);
//         cout<<"a = "<<a<<endl;
//         cout<<"b = "<<b<<endl;
//         p.fun2(a,b);
//         cout<<"a = "<<a<<endl;
//         cout<<"b = "<<b<<endl;
//             }
// ************************************************************************************
// class aps{
//     private:
//     int a,b;
//     public:
//     aps(int x,int y){
//         a = x;
//         b = y;

//     }
//     aps(aps &q){
//         q.a = 10;
//         q.b =20;
// q.showdata();
//     }
//     void showdata(){
// cout<<"a = "<<a<<endl;
// cout<<"b = "<<b<<endl;
//     }
// };
// int main(){
// aps p(10,5);
// p.showdata();
// aps w(p);
// }
// ****************************************************
// void fun1(){
//     cout<<"This is function without argument"<<endl;
// }
// void fun1(int x){
//     cout<<"x= "<<x<<endl;
// }
// void fun1(int x,int y){
//      cout<<"x= "<<x<<endl;
//  cout<<"y= "<<y<<endl;
// }
// int main(){
//     fun1();
//     fun1(5);
//     fun1(10,55);
// }
// ***************************************************************************
// class aps{
// private:
// int x;
// public:
// aps(){
//     x= 0;
//     cout<<"default base"<<endl;
// }
// aps(int a){
//     x = a;
// cout<<"p base"<<endl;
// cout<<"x = "<<x<<endl;
// }
// };
// class bca:public aps{
//     private:
//     int y;
//     public:
//     bca(){
//         y = 0;
// cout<<"default derived"<<endl;
//     }
// bca(int a,int y):aps(a){
//     this->y=y;
// }
// };
// int main(){
//     bca p(10,5);
// }
// **************************************************************************
// #include <iostream>
// using namespace std;
// class BC
// {
// public:
//     int x;
//     void show()
//     {
//         cout << "1 The value of x is " << x << endl;
//     }
// };
// class DC : public BC
// {
// public:
//     int y;
//     void show()
//     {
//         cout << "2 The value of y is " << y << endl;
//     }
//     void fun1()
//     {
//         cout << "This is fun()1" << endl;
//     }
// };
// int main()
// {
//     DC *ptr;
//   DC p;
//   ptr = &p;
//   p.x=15;
//   p.y=10;
//   ptr->show();
//   ptr->fun1();
// }
// *******************************************************************************************
// class MCA {
//     int x,y;
//     public:
//     MCA(int a,int b):x(a),y(b){}
//     void show(){
//         cout<<"x = "<<x<<endl;
//         cout<<"y = "<<y<<endl;
//             }
//     MCA operator+(MCA w);
//     friend MCA operator-(MCA p,MCA q);
// };
// MCA MCA ::operator+(MCA w){
//     MCA r(0,0);
//     r.x = x + w.x;
//     r.y = y + w.y;
//     return(r);

// }
//  MCA operator-(MCA p,MCA q){
// MCA r(0,0);
//  r.x = p.x - q.x;
//     r.y = p.y - q.y;
//     return(r);

// }
// int main(){
//     MCA a(5,10),b(5,10);
//     MCA c(0,0);
//     c = a+b;
//     c.show();
//     MCA d(0,0);
//     d = a-b;
//     d.show();
// }
// *******************************************************************************************
// class MCA {
//     int x;
//     public:
//     MCA(int a):x(a){}
//     void show(){
//         cout<<"x = "<<x<<endl;
//             }
//     void operator++();
//     friend void operator--(MCA &p);
// };
// void MCA ::operator++(){
//      ++x;

// }
//  void operator--(MCA &p){
//  --p.x;

// }
// int main(){
//     MCA a(5);
//     ++a;
//     a.show();
//     --a;
//     a.show();

// }
// ********************************************************************************
// class MCA {
//     int x;
//     public:
//     MCA(int a):x(a){}
//     int operator < (MCA p);
//     friend int operator > (MCA p,MCA q);
// };
// int MCA ::operator < (MCA p){
//      if(x<p.x){
//         return(1);
//      }
//      else{
//         return(0);
//      }

// }
//  int operator > (MCA p,MCA q){
//  if(p.x>q.x){
//         return(1);
//      }
//      else{
//         return(0);
//      }

// }
// int main(){
//     MCA a(5),b(7);
//     printf("%d\n",a<b);
//     printf("%d",a>b);


// }