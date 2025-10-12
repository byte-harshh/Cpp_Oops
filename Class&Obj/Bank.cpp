#include <iostream>
using namespace std;
class Bank
{
private:
    string accNo;
    double balance;

public:
    void AccDetails(string a,double b)
    {
        accNo = a;
        balance = b;
    }
    double Deposit(double d)
    {  
     if(d>0){
       balance = balance + d; 
       cout << "Entered Amount is Rs."<<d<<endl;
    //    cout << "Balance is Rs."<<balance<<endl;
     }
     else
       cout <<"Invalid Entered Amount"<<endl;
    }
    double Withdraw(double w)
    {
     if(balance >= w)   
     {
        balance = balance - w;
        cout <<"You Withdraw Rs."<<w<<endl;
        // cout <<"Balance is Rs."<<balance<<endl;
     }
     else
       cout<<"Insufficient Balance"<<endl;
    }
    void diplayBalance()
    {   if(balance >= 0)
        cout <<"Balace is Rs."<<balance<<endl;
        else
        cout <<"Balace is Rs.0"<<endl;
    }

};

int main()
{
   Bank b1;
   b1.AccDetails("7418852963456",10000);
   b1.Deposit(2000);
   b1.Withdraw(1000);
   b1.diplayBalance();
}