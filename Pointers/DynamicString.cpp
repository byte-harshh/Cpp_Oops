#include <iostream>
using namespace std;
int main(){
    int size;
    cout << "Enter size of String : ";
    cin >> size;
    cout <<"Enter String : ";
    char *s = new char[size];
    cin >> s;

    // cin.get(s,100);
    // cin.ignore();
    
    cout << "Entered string: "<<s<<endl;
    delete []s;
    return 0;

}