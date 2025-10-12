#include <iostream>
using namespace std;
int* toArray(int n)
{
    int *arr = new int[n];
    for(int i=0;i<n;i++){
        arr[i] = i+2;
    }
    return arr;

}

int main()
{   
    int size;
    cout<<"Enter Size of Array: ";
    cin >>size;
    int *printArray = toArray(size);
    for(int i=0;i<size;i++){
       cout<< printArray[i]<<" ";
    }
    
    delete printArray;
    return 0;
}