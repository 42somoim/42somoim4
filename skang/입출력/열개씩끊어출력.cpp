#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;
    int j;

	j = 0;
    getline(cin, str);
    while (str[j] != '\0')
    {
        cout << str[j];
        j++;
        if (j % 10 == 0)
            cout << "\n";
    }
    return (0);
}