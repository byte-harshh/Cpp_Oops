#include <iostream>
using namespace std;
void change(int *a){
    *a = 100;
}
int main(){
   int x=85;
   cout << x <<endl;
   change(&x);
   cout << x;
return 0;   
}