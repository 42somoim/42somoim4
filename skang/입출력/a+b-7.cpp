#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;
    int count;
    
    cin >> count;
    for (int i=0; i <count; i++)
    {
        cin >> a >> b;
        cout << "Case #" << i + 1 <<": " << a+b <<endl;
    }
}