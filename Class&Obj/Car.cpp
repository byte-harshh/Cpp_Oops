#include <iostream>
using namespace std;
class Car
{
  private:
    string brand;
    int speed;
    string color;
  public:
    void setDetails(string b, int s, string c)
    {
       brand = b;
       speed = s;
       color = c;
    }
    void Display()
    {
        cout << "Brand Of Car : "<<brand<<endl;
        cout << "Speed of Car : "<<speed<<" m/s"<<endl;
        cout << "Color of Car : "<<color<< endl;
    } 
};
int main()
{
    Car c1,c2;
    c1.setDetails("Audi",150,"Grey");
    c2.setDetails("Mercedese",255,"Red");
    c1.Display();
    cout<<"**********************************"<<endl;
    c2.Display();
}