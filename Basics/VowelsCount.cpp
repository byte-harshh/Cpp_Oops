#include <iostream>
//#include <string>
using namespace std;
int main(){
    string s;
    cout << "Enter String : ";
    getline(cin,s);
    // cout << s;
    int count = 0;
    char ch;
    for(int i=0; i<s.length();i++){
       ch = s[i];
       if (ch == 'a'||ch =='e'||ch =='i'||ch =='o'||ch=='u')
        count ++;
    }
    cout<< "No. of Vowels : "<<count;
    return 0;
}
