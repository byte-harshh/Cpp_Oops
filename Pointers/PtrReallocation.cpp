#include <iostream>
using namespace std;
int main()
{
    int n,m;
    cout << "Enter size of Array : ";
    cin >> n;
    int *arr = new int[n];
    cout << "Enter Elements in the Array : "; 
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    cout<<"Enter Size of Bigger array : ";
    cin >> m;
    int *bigArr = new int[m];

    for(int i=0;i<n;i++){
        bigArr[i] = arr[i];
    }
    cout<<"Enter extra "<<m-n<<" Elements in big Array : ";
    for(int i=n; i<m; i++){
        cin >> bigArr[i];
    }
    cout<<"Smalller array : ";
    for(int i=0;i<n;i++){
        cout << arr[i]<< " ";
    }
    cout<<endl;
    cout<<"Bigger array : ";
    for(int i=0;i<m;i++){
        cout << bigArr[i]<< " ";
    }    
return 0;
}
