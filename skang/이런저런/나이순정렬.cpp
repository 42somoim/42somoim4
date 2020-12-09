#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool compare (pair<int, string> v1, pair<int,string> v2)
{
    return (v1.first < v2.first);
}

int main()
{
    int n;

    cin >> n;
    vector<pair<int, string>> v(n);
    for(int i=0; i< n; i++)
    {
        cin >> v[i].first >> v[i].second;
    }
    stable_sort(v.begin(), v.end(), compare); //stable_sort와 sort의 차이
    for (int i=0; i<n; i++)
        cout << v[i].first << " " << v[i].second << "\n";
}