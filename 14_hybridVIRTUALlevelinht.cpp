/**********************************************************************
 * VIRTUAL BASE CONCEPT
*/
#include <iostream>
using namespace std;
//*******************************************//
/* MULTIPLE LEVEL
TWO SUPER CLASS AND
 ONE SUBCLASSS
*/
class bhagwaan
{
public:
    int bhgwanid;
    char bhgwanname[50];
    char bhgwanaddress[50];
    // void getbhgdetails()
    // {
    //     cout << "Enter bhgwanid,bhagwan name and bhgwan address" << endl;
    //     cin >> bhgwanid;
    //     fflush(stdin);
    //     gets(bhgwanname);
    //     fflush(stdin);
    //     gets(bhgwanaddress);
 //   }
    // void showbhgdetails()
    // {
    //     cout << "Bhgwan id is " << bhgwanid << endl
    //          << "Bhgwan name is " << bhgwanname
    //          << "AND Bhgwan address is " << bhgwanaddress << endl;
    // }
};
class father : virtual public bhagwaan
{
public:
    int fatherid;
    char fathername[50];
    char dadaname[50];
};
class mother : virtual public bhagwaan
{
public:
    int motherid;
    char mothername[50];
    char nananame[50];
};
class child : public father, public mother
{
public:
    int childid;
    char childname[50];
    int childdob;
    void getdata()
    {
        cout << "Enter bhgwanid,bhagwan name and bhgwan address" << endl;
        cin >> bhgwanid;
        fflush(stdin);
        gets(bhgwanname);
        fflush(stdin);
        gets(bhgwanaddress);
        cout << "Enter the fatherid, father name and dadaji name" << endl;
        cin >> fatherid;
        fflush(stdin);
        gets(fathername);
        fflush(stdin);
        gets(dadaname);
        cout << "Enter the motherid, mother name and nanaji name" << endl;
        cin >> motherid;
        fflush(stdin);
        gets(mothername);
        fflush(stdin);
        gets(nananame);
        cout << "Enter the child id,child name and child date of birth" << endl;
        cin >> childid;
        fflush(stdin);
        gets(childname);
        cin >> childdob;
    }
    void showdata()
    {
        cout << "Bhgwan id is " << bhgwanid << endl
             << "Bhgwan name is " << bhgwanname
             << "AND Bhgwan address is " << bhgwanaddress << endl;
        cout << "CHILD FATHER SIDE DETAILS:::::" << endl
             << "CHILD FATHER ID is " << fatherid << endl
             << "AND CHILD FATHER NAME is " << fathername << endl
             << "AND CHID DADAJI NAME is " << dadaname << endl;
        cout << "CHILD MOTHER SIDE DETAILS:::::" << endl
             << "CHILD MOTHER ID is " << motherid << endl
             << "AND CHILD MOTHER NAME is " << fathername << endl
             << "AND CHID NANAJI NAME is " << dadaname << endl;
        cout << "CHILD DETAILS:::::" << endl
             << "CHILD ID is " << childid << endl
             << "AND CHILD NAME is " << childname << endl
             << "AND CHID DATE OF BIRTH is " << childdob << endl;
    }
};
int main()
{
    child p;
    p.getdata();
    p.showdata();
   // p.bhagwaan ::getbhgdetails();
   /* main question 
   why child class cant access bhgwaan members?????????????????????????????????????????????
   ANSWER --- because of virtual base concept 
   */
    cout << "Hava a good day";
}