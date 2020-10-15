#include <iostream>

using namespace std;

int main()
{
    int n;
    int i;
    int j;

    cin >> n;
    i = n;
    j = 0;
    while (i > 0)
    {
        j = i - 1;
        while (j < n)
        {
            cout << "*";
            j++;
        }
        cout << "\n";
        i--;
    }
}