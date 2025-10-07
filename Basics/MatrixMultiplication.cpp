#include <iostream>
using namespace std;

int main() {
    int r, c, p, q;
    cout << "Enter row Size of 1st Matrix : ";
    cin >> r;
    cout << "Enter column size of 1st Matrix : ";
    cin >> c;
    int a[r][c];
    cout << "Enter row Size of 2nd Matrix : ";
    cin >> p;
    cout << "Enter column size of 2nd Matrix : ";
    cin >> q;
    int b[p][q];
    int C[r][q]; 

    if (c != p)
        cout << "Matrix Multiplication Not Possible" << endl;
    else {
        cout << "Enter elements of 1st Matrix :" << endl;
        for (int i = 0; i < r; i++)
            for (int j = 0; j < c; j++)
                cin >> a[i][j];

        cout << "Enter elements of 2nd Matrix :" << endl;
        for (int i = 0; i < p; i++)
            for (int j = 0; j < q; j++)
                cin >> b[i][j];

        for (int i = 0; i < r; i++) {
            for (int j = 0; j < q; j++) {
                int sum = 0;
                for (int k = 0; k < c; k++) {
                    sum += a[i][k] * b[k][j];
                }
                C[i][j] = sum;
            }
        }

        cout << "Resultant Matrix :" << endl;
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < q; j++)
                cout << C[i][j] << " ";
            cout << endl;
        }
    }
    return 0;
}
