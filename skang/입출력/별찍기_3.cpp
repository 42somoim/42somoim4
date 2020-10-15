#include <iostream>

using namespace std;

int main()
{
    int num;
    int i;
    int j;

    i = 0;
    cin >> num;
    while (i < num)
    {
        j = i;
        while (j < num)
        {
            cout << "*";
            j++;
        }
        cout << "\n";
        i++;
    }
}