#include <iostream>
using namespace std;
class Student
{
private:
  int RollNo;
  string name;
  int mathMark;
  int phyMark;
  int cheMark;

public:
  Student(int RollNo,string name,int mathMark,int phyMark,int cheMark)
  {
    this -> RollNo = RollNo;
    this -> name = name;
    this -> mathMark = mathMark;
    this -> phyMark = phyMark;
    this -> cheMark = cheMark;
  }
  int totalMarks();
  string grade();  
};

int Student :: totalMarks()
{
  return phyMark + mathMark + cheMark;
}
string Student :: grade()
{
    if(totalMarks() > 60)
    return "A";
    else if(totalMarks() >35 && totalMarks()<60)
    return "B";
    else
    return "C";
}

int main()
{
   Student s1(33,"Harsh",90,75,98);
   cout<<s1.totalMarks()<<endl;
   cout<<s1.grade()<<endl;
} 