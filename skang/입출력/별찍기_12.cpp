#include <iostream>

using namespace std;

int main()
{
    int n;

    cin >> n;
    for (int i=0;i<n;i++)
    {
        for (int k=0;k<(n-i)-1;k++)
            cout << " ";
        for (int j=n;j<i+n+1;j++)
            cout << "*";
        cout << "\n";
    }
    for (int i=0;i<n-1;i++)
    {
        for (int k=n;k<i+n+1;k++)
            cout << " ";
        for (int j=0;j<(n-i)-1;j++)
            cout << "*";
        cout << "\n";
    }
}