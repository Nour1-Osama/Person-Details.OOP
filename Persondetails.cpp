#include<iostream>
using namespace std;
class clsPerson
{
  private:
  int _ID;
  string _FirstName;
  string _LastName;
  string _Email;
  string _Phone;

  public:
  clsPerson(int ID ,string FirstName , string LastName ,string Email ,string Phone )
  {
    _ID=ID;
    _FirstName=FirstName;
    _LastName=LastName;
    _Email=Email;
    _Phone=Phone;
  }
  int ID()
  {
    return _ID;
  }
  void SetFirstName(string FirstName)
  {
    _FirstName=FirstName;
  }
  string FirstName()
  {
    return _FirstName;
  }
  void SetLastName(string LastName)
  {
    _LastName=LastName;
  }
  string LastName()
  {
    return _LastName;
  }
  void SetEmail(string Email)
  {
    _Email=Email;
  }
  string Email()
  {
    return _Email;
  }
  void SetPhone(string Phone)
  {
    _Phone=Phone;
  }
  string Phone()
  {
    return _Phone;
  }

  void Print()
  {
    cout<<"Info:              "<<endl;
    cout<<"-------------------------------\n";
    cout<<"ID        : "<<_ID << endl;
    cout<<"FirstName : "<<_FirstName<<endl;
    cout<<"LastName  : "<<_LastName<<endl;
    cout<<"FullName  : "<<_FirstName+" "+_LastName<<endl;
    cout<<"Email     : "<<_Email<< endl;
    cout<<"Phone     : "<<_Phone<<endl;
    cout<<"--------------------------------\n";
  }
  void SendEmail(string Message1 , string Message2)
  {
    cout<<"The Following Message Sent Successfully To Email: "<<_Email<<endl;
    cout<<endl;
    cout<<"Subject: "<<Message1 <<endl;
    cout<<"Body   : "<<Message2<<endl;
    cout<<"----------------------------\n";
  }
  void SendSMS(string SMS)
  {
    cout<<"The Following SMS Sent Succcessfully To phone: "<< _Phone<<endl;
    cout<<SMS << endl;
  }
};
int main()
{
clsPerson Person1(10,"Nour" , "OSama" ,"@gmail.com","1233434575");
Person1.Print();
Person1.SendEmail("Hi", "How Are You ?");
Person1.SendSMS("How Are You ?");

}