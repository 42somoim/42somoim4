#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;
    int cnt;

    cin >> cnt;
    for(int i=0;i<cnt;i++)
    {
        cin >> a >> b;
        cout << a + b << endl;
    }
}