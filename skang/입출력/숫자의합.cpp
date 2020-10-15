#include <iostream>

using namespace std;

int main()
{
    int count;
    char num[100] = {0,};
    int sum;

    sum = 0;
    cin >> count;
    for (int i=0;i<count;i++)
    {
        cin >> num[i];
        sum += (num[i] - '0');
    }
    cout << sum;
}