#include <iostream>

using namespace std;

int main()
{
    int n;
    int num;
    long long arr[100]={1,1,1,2,2,3,4,5,7};

    cin >> n;
    for (int i=0;i<n;i++)
    {
        cin >> num;
        for (int j=9;j<num;j++)
            arr[j]= arr[j-1] + arr[j-5];
        cout << arr[num-1] << endl;
    }
    
}