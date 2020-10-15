#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;
    int count;
    char coma;

    cin >> count;
    for (int i = 0; i < count; i++)
    {
        cin >> a >> coma >> b;
        cout << a+b << endl;
    }
}