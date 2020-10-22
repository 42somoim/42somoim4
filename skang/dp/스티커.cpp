#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    int num;
    int arr[2][100001] = {0};
    int res[2][100001] = {0};
    
    cin >> n;
    for (int s=1;s <=n;s++)
    {
        cin >> num;
        for (int j=0; j < num; j++)
            cin >> arr[0][j];
        for (int j=0; j < num; j++)
            cin >> arr[1][j];
        res[0][0] = arr[0][0];
        res[1][0] = arr[1][0];
        res[0][1] = arr[0][1] + res[1][0];
        res[1][1] = arr[1][1] + res[0][0];
        for (int j=2; j<num; j++)
        {
            res[0][j]= arr[0][j] + max(res[1][j-1], res[1][j-2]);
            res[1][j]= arr[1][j]+ max(res[0][j-1], res[0][j-2]);
        }
        cout << max(res[0][num-1], res[1][num-1]) << endl; //endl...잊지말자
    }
}