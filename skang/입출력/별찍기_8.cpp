#include <iostream>

using namespace std;

int main()
{
    int n;
    int max;
    int j;

    cin >> n;
    max=n*2;
    for (int i=0;i<n;i++)
    {
        for (j=0; j<(i+1);j++)
            cout << "*";
        for(int k=0; k<(max-(i*2+2));k++)
            cout <<  " ";
        for (j=0; j<(i+1);j++)
            cout << "*";
        cout << "\n";
    }
    for (int i=n-1;i>0;i--)
    {
        for (j=0; j<i;j++)
            cout << "*";
        for(int k=(max-(n-i)*2);k<max;k++)
            cout <<  " ";
        for (j=0; j<i;j++)
            cout << "*";
        cout << "\n";
    }
}