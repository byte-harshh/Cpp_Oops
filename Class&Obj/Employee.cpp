#include <iostream>
using namespace std;
class Employee
{
private:    
  int empID;
  string name;
  double salary;
public:
  Employee(int empID, string name, double salary)
  {
    this -> empID = empID;
    this -> name = name;
    this -> salary = salary;
  }
  void display()
  {
    cout << "Employee ID       : "<<empID<<endl;
    cout << "Name of Employee  : "<<name<<endl;
    cout << "Salary of Employee: "<<salary<<endl;
  }
};
int main()
{
    Employee e1(123456,"Harsh",500000);
    e1.display();  
}