#include <iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter size of Array : ";
    cin >> size;
    int arr[size];
    // int as = sizeof(arr)/sizeof(arr[0]);
    for(int i=0 ; i < size; i++){
        cin >> arr[i];
    }
    cout<<"Reverse of Array is :"<<endl;
    for(int i=size-1; i>=0; i--){
        cout<<arr[i]<<" ";
    }
    return 0;
}