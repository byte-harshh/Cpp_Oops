#include <iostream>
using namespace std;
int main(){
    int n,sum = 0;
    cout << "Enter a Number : ";
    cin >> n;
    while(n > 0){
       int p = n % 10;
       sum += p;
       n = n / 10;
    }
    cout<< "Sum of Digits : "<<sum;
    return 0;
}