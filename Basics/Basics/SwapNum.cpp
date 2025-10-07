#include <iostream>
using namespace std;
int main(){
    int a,b;
    cout << "Enter Two Number for Swap : ";
    cin >> a >> b;
    a = a + b;
    b = a - b;
    a = a - b;
    cout << "After Swaping : "<< a << "  "  << b;
    return 0;
}