#include <iostream>
using namespace std;
// float sum(float a, float b){
//     float z ;
//     z = a + b;
//     return z;
// }
// int main(){
//    float a = 0.5f,b=8.7f;
//    cout << sum(a,b) <<endl;
//    float k = sum(a,b);
//    cout << k;
// }


//Template Function
// template<class T>
// T maximum(T a, T b){
//     return a>b?a:b;
// }
// int main(){
//     cout<< maximum(10,9)<<endl;
//     cout << maximum(10.5,78.5);
//     return 0;
// } 

// void swap(int a, int b){
//     cout <<a<<" "<<b<<endl;
//     int temp;
//     temp =a;
//     a = b;
//     b = temp;
//     cout <<a<<" "<<b<<endl;
// }
//     int main(){
//         int x=10,y=20;
//         swap(x,y);
//         cout<<x<<" "<<y;
//     }


// void swap(int *a, int *b){

//     int temp;
//     temp = *a;
//     *a = *b;
//     *b = temp;

// }
//     int main(){
//         int x=10,y=20;
//         swap(&x,&y);
//         cout<<x<<" "<<y;
//     }

// void swap(int &a, int &b){
//     cout<<&a<<" "<<&b<<endl;
//     int temp;
//     temp =a;
//     a = b;
//     b = temp;
// }
//     int main(){
//         int x=10,y=20;
//         swap(x,y);
//         cout<<&x<<" "<<&y<<endl;

//         cout<<x<<" "<<y;
//     }

// int *fun(){
//     int *p =new int[5];
//     for(int i=0;i<5;i++)
//     p[i] = 5*i;
//     cout<<p<<endl;
//     return p;
// }
// int main(){
//     int *q=fun();
//     cout<<q<<endl;
//     for(int i=0;i<5;i++)
//     cout << q[i] <<endl;
// }

// int & fun(int &x){ 
//      return x;
// }
// int main(){
//     int a = 10;
//     fun(a);

//     //fun(a)=25;
//     cout <<a<<endl;
// }

// int g=5 ;
// void fun(){

//     int a=10;
//     a++;
//     g++;
//     cout<<a<<" "<<g<<endl;
// }
// int main(){
//     cout <<g<<endl;
//     fun();
//     cout<<g<<endl;
// }

void fun(){
   static int s =10;
   s++;
   cout<<s<<endl;
}
   int main(){
    fun();
    fun();
   }

