#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

struct person{
    string name;
    int s1, s2, s3;
};

bool compare(person &v1, person &v2)
{
    if (v1.s1 > v2.s1)
        return (true);
    else if (v1.s1 == v2.s1)
    {
        if (v1.s2 < v2.s2)
            return (true);
        else if (v1.s2 == v2.s2)
        {
            if (v1.s3 > v2.s3)
                return (true);
            else if (v1.s3 == v2.s3)
                return (v1.name < v2.name);
        }
    }
    return (false);
}

int main()
{
    int n;

    cin >> n;
    vector<person> v(n);
    for (int i=0; i<n; i++)
        cin >> v[i].name >> v[i].s1 >> v[i].s2 >> v[i].s3;
    sort(v.begin(), v.end(), compare);
    for (int i=0; i<n;i++)
        cout << v[i].name << "\n";
    }