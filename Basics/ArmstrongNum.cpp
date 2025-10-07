#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n, sum=0;
    cout << "Enter a number : ";
    cin >> n;
    int m = n;
    string s = to_string(n);
    int l = (int)s.length();
    while (n>0)
    {
        int last = n % 10;
        sum +=(int)round(pow(last,l));
        n = n/10;
    }
    if(sum == m)
    cout << "Its Armstrong Number";
    else
    cout <<"Its Not a Armstrong Number";
    return 0;
    
}