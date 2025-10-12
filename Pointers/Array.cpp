#include <iostream>
using namespace std;
int main(){
    int *p = new int[5];
    cout <<"Enter Elements in Array"<<endl;
    for(int i=0;i<5;i++)
        cin>>p[i];
    cout<<"Elements of the arrays :"<<endl;
    for(int i=0;i<5;i++)
        cout <<p[i]<<" ";

return 0;        
}