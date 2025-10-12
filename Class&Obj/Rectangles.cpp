#include <iostream>
using namespace std;
class Rectangles
{
  private:
    int length;
    int width;
  public:
    void setData(int l, int b)
    {
        length = l;
        width = b;
    }
    int getArea()
    {
        return length * width;
    }
    int getPerimeter()
    {
        return 2*(length + width);
    }

};

int main()
{
   Rectangles r1;
   r1.setData(7,8);
   cout << r1.getArea()<<endl;
   cout <<"**************************"<<endl;
   cout << r1.getPerimeter();
}