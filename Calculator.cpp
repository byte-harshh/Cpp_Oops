#include <iostream>
using namespace std;
int main(){
 int a,b;
 char ch;
 cout << "Enter Two Number : ";
 cin >> a >> b;
 cout << "Enter Operator for Operation : ";
 cin >> ch;
 switch(ch) {
    case '+' : cout << "Addition is "<< a + b;
    break;
    case '-' : cout << "Substraction is "<< a - b;
    break;
    case '*' : cout << "Multiplication is "<< a*b;
    break;
    case '/' : cout << "Division is "<< a/b;
    break;
 }
 return 0;
}