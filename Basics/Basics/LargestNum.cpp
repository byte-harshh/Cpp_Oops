#include <iostream>
using namespace std;
int main(){
    int max = 0;
    int arr[5];
    cout << "Enter Numbers in an array : ";
    for(int i = 0; i<5; i++){
        cin >> arr[i];
        if(max < arr[i])
        max = arr[i];
    }
    cout << "Maximum Number : "<<max;
    return 0;
}