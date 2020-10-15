#include <iostream>

using namespace std;

int main()
{
    int n;
    int min;
    int max;
    int i;
    int arr[1000000] = {0,};

    cin >> n;
    for (i=0;i<n;i++)
        cin >> arr[i];
    if (n == 1)
    {
        max = arr[0];
        min = arr[0];
        cout << min << " " << max;
        return 0;
    }
    if (arr[0] < arr[1])
    {
        min = arr[0];
        max = arr[1];
    }
    else
    {
        max = arr[0];
        min = arr[1];
    }
    i = i -2;
    n = 2;
    while (i > 0)
    {
        if (arr[n] >= max)
            max = arr[n];
        if (arr[n] <= min)
            min = arr[n];
        n++;
        i--;
    }
    cout << min << " " << max;
}