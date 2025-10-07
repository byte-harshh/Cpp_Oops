#include <iostream>
using namespace std;
int main(){
    int a,b;
    cout << "Enter Two Numbers : ";
    cin >> a >> b;
    while(a != b){
        if(a > b)
        a = a - b;
        else 
        b = b - a;
    }
    cout <<"GCD is :"<< a;
    // while (b != 0){
    //     int temp = b;
    //     b = a % b;
    //     a = temp;
    // }
    // cout << "GCD : "<<a<<endl;
    return 0;
}