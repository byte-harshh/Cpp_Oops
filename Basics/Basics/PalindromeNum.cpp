#include <iostream>
using namespace std;
int main(){
    int n, rev = 0;
    cout << "Enter a Number is : ";
    cin >> n;
    int m = n;
   // cout << "Entered Number is : "<<n<<endl;
    cout << "Reverse of Number : ";
    while (n > 0){
        int p = n % 10;
        rev = rev * 10 + p;
        n = n / 10;
    }

    if(m == rev)
    cout << "Its Palindrome";
    else
    cout << "Not Palindrome";
    return 0;
}