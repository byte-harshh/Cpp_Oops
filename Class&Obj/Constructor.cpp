#include <iostream>
using namespace std;
class Rectangle
{
private:
    int length;
    int breadth;

public:
    // Rectangle(){
    //     length = 1;
    //     breadth = 1;
    // }
    // Rectangle(int l,int b){
    //     setLength(l);
    //     setBreadth(b);
    // }
    
    Rectangle(Rectangle &r){
        length = r.length;
        breadth = r.breadth;
    }
    Rectangle(int l=1,int b=1){
        setLength(l);
        setBreadth(b);
    }

    void setLength(int l)
    {  
        if(l<0)
        length = 1;
        else
        length = l; 
    }
    void setBreadth(int b)
    {
        if(b<0)
        breadth = 1;
        else
        breadth = b;
    }
    int getLength()
    {
        return length;
    }
    int getBreadth()
    {
        return breadth;
    }
    int area()
    {
        return length * breadth;
    }
    int perimeter()
    {
        return 2 * (length + breadth);
    }
};
int main()
{
       Rectangle r1;
    // Rectangle r1(10,5);
    // Rectangle r2(r1);
    cout << r1.area()<<endl;
  
}

//*****Deep Copy Constructor*****
// class Test{
//     public:
//     int a;
//     int *p;
//     Test(int x){
//         a = x;
//         p = new int[a];
//     }
//     Test(Test &t){
//         a = t.a;
//     //    p = t.p;
//         p = new int[a];
//     }

// };
// int main(){
//     Test r(5);
//     Test r1(r);

// }

