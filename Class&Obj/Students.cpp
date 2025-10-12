#include <iostream>
using namespace std;
class Students
{
private:
  int rollNo;
  string name;
  int marks;

public:
  void input(int r, string n, int m)
  {
    rollNo = r;
    name = n;
    marks = m;
  }
  void display()
  {
    cout << "Name of Student : " << name << endl;
    cout << "Roll Number     : " << rollNo << endl;
    cout << "Marks           : " << marks << endl;
  }
};
int main()
{
  Students s1, s2, s3;
  int arr[3];
  for (int i = 0; i < 3; i++)
  {
    cout << "**Enter Student Details**" << endl;
    if (i == 0)
    {
      string n;
      int r, m;
      cout << "Enter Student Name : ";
      cin >> n;
      cout << "Enter Roll No.     : ";
      cin >> r;
      cout << "Enter marks        : ";
      cin >> m;
      s1.input(r, n, m);
    }
    if (i == 1)
    {
      string n;
      int r, m;
      cout << "Enter Student Name : ";
      cin >> n;
      cout << "Enter Roll No.     : ";
      cin >> r;
      cout << "Enter marks        : ";
      cin >> m;
      s1.input(r, n, m);
    }
    if (i == 2)
    {
      string n;
      int r, m;
      cout << "Enter Student Name : ";
      cin >> n;
      cout << "Enter Roll No.     : ";
      cin >> r;
      cout << "Enter marks        : ";
      cin >> m;
      s1.input(r, n, m);
    }
    cout << "**********************************" << endl;
  }
}