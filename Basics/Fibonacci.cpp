#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    int n;
    cout << "Enter a Number : ";
    cin >> n;
    a = 0;
    b = 1;
    // for(int i=0; i<n; i++){
    //     cout << a <<" ";
    //     c = a+b;
    //     a = b;
    //     b = c;
    // }

    while(a<=n){
        cout << a <<" "<<b<<" ";
        a = a + b;
        b = a + b;
    }
    return 0;
}