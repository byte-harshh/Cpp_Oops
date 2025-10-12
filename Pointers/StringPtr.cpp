#include <iostream>
using namespace std;
int main(){
    char str[100];
    cout<<"Enter String: "<<endl;
    cin>>str;
    char *s = str;
    int count = 0;
    for(char *s=str;*s!='\0';s++)
    {
      count++;  
    }

    
    // while (*s != '\0')
    // {
    //     count++;

    //     s++;
    // }
    
    cout<< count <<endl;
    return 0;
}