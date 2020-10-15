#include <iostream>

using namespace std;

int main()
{
    int n;
    int count;

    count = 1;
    cin >> n;
    for (int i=1;i<=n;i++)
    {
        for (int j=1;j <= 2*n-1;j++)
        {
            if (count == 1 && j == n)
                cout << "*";
            else if (count != 1 && count != n && (j == n-count+1 || j == n+count-1))
                cout << "*";
            else if (count == n)
                cout << "*";
            else if (j<=n+count)
                cout << " ";
        }
        count++;
        cout << "\n";
    }
}