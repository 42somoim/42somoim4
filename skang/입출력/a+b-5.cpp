#include <iostream>

using namespace std;

int main(void)
{
    int a;
    int b;

    while (cin >> a >> b)
    {
        if (a == 0 && b == 0)
            return 0;
        cout << a + b << endl;
        
    }
}