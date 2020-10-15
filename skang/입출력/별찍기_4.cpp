#include <iostream>

using namespace std;

int main()
{
    int num;
    int i;
    int j;
    int space;

    i = 0;
    space = 0;
    cin >> num;
    while (i < num)
    {
        j = i;
        space = i;
        while (space > 0)
        {
            cout << " ";
            space--;
        }
        while (j < num)
        {
            cout << "*";
            j++;
        }
        cout << "\n";
        i++;
    }
}