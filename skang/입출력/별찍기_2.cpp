#include <iostream>

using namespace std;

int main()
{
    int n;
    int i;
    int j;
    int space;

    cin >> n;
    i = n;
    j = 0;
    while (i > 0)
    {
        j = i - 1;
        space = i - 1;
        while (space > 0)
        {
            cout << " ";
            space--;
        }
        while (j < n)
        {
            cout << "*";
            j++;
        }
        cout << "\n";
        i--;
    }
}