#include <iostream>
using namespace std;
class Complex
{
 private:   
   float real;
   float img;
public:
   Complex(float r=0,float i=0)
   {
    real = r;
    img = i;
   }  
   Complex add(Complex c)
   {
     Complex result;
     result.real = real + c.real;
     result.img = img + c.img;
     return result;
   } 
   void display()
   {
    cout << real<<" + "<<img<<"i"<<endl;
   }
};
int main()
{
   Complex c1(5.2,8.2);
   Complex c2(9.5,7.8);
   Complex sum = c1.add(c2);
   cout << "Sum of two Complex Number : ";
   sum.display();
}
