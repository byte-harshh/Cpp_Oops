#include <iostream>
using namespace std;
int main(){
    int row,col;
    cout << "Enter Row : ";
    cin >> row;
    cout << "Enter Column : ";
    cin >> col;
    int **p = new int*[row];
    for(int i=0;i<row;i++){
        int *p = new int[col];
    }
    cout << "Enter Elements in array : "<<endl;
    for(int i=0; i<row;i++){
        for(int j=0;j<col;j++){
            cin >>  p[i][j];
        }
    }
    cout << "Elements of array are : "<<endl;   
        for(int i=0; i<row;i++){
        for(int j=0;j<col;j++){
            cout <<  p[i][j] << " ";
        }
        cout <<endl;
    }
    
    for(int i=0;i<row;i++){
        delete p[i];
    }
    delete []p;
}