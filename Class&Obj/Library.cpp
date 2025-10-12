#include <iostream>
using namespace std;
class Book
{
 private:
   string title;
   string author;
   double price;
 public:

   double getPrice()
   {
      return price;
   }  
   void input()
   {
     cout << "Enter Title of Book : ";
     getline(cin, title);
     cout << "Enter Author Name   : ";
     getline(cin,author);
     cout << "Enter Price of Book : ";
     cin >> price;
     cin.ignore();  

   }
   void display()
   {
    cout << "Title of Book  : "<< title <<endl;
    cout << "Author of Book : "<< author<<endl;
    cout << "Price of Book  : "<< price<<endl;
   }

};
int main()
{
  Book B[5];
  for(int i=0;i<5;i++)
  { 
    cout << "\nBook  "<<(1+i)<<endl;
    B[i].input();
  }
  int maxPrice = 0;
  for(int i=0;i<5;i++)
  {
     if(B[i].getPrice() > B[maxPrice].getPrice() )
     maxPrice = i;
  }
  cout <<"\nBook with Highest Price  "<<endl;

  B[maxPrice].display();
  return 0;
}
