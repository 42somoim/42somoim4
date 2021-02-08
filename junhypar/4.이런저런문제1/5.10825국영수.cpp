#include <iostream>
#include <vector>
using namespace std;

int sot[100001];

void	merge(string *name, int n[], int data[][3], int left, int mid, int right)
{
	int i, j, k, flag;
	i = left;
	j = mid + 1;
	k = left;
	flag = 0;

    while(i<=mid && j<=right)
    {
		flag = 0;
		for(int kk = 0; kk < (int)name[n[i]].size(); kk++)
		{
			if (name[n[i]][kk] < name[n[j]][kk])
			{
				flag = 1;
				break;
			}
			else if (name[n[i]][kk] > name[n[j]][kk])
				break;
		}
        if(data[n[i]][0] > data[n[j]][0] || ((data[n[i]][0] == data[n[j]][0]) &&
					(data[n[i]][1] < data[n[j]][1])) || 
				((data[n[i]][0] == data[n[j]][0]) && (data[n[i]][1] == data[n[j]][1]) &&
				 (data[n[i]][2] > data [n[j]][2])) ||
				((data[n[i]][0] == data[n[j]][0]) && (data[n[i]][1] == data[n[j]][1]) &&
				 (data[n[i]][2] == data [n[j]][2]) && (flag == 1)))
        {
            sot[k] = n[i];
            i++;
        }
        else
        {
            sot[k] = n[j];
            j++;
        }
        k++;
    }
        if (i > mid)
        {
            for(int l = j; l <=right; l++)
            {
                sot[k] = n[l];
                k++;
            }
        }
        else
        {
            for(int l = i; l <=mid; l++)
            {
                sot[k] = n[l];
                k++;
            }
        }

        for(int l = left; l <= right; l++)
        {

            n[l] = sot[l];
        }

}

void	merge_vector(string *name, int n[], int data[][3], int left, int right)
{
	int mid;

	if (left < right)
	{
		mid = (left + right) / 2;
		merge_vector(name, n, data, left, mid);
		merge_vector(name, n, data, mid+1, right);
		merge(name, n, data, left, mid, right);
	}
}

int main()
{
	int cnt;
	cin >> cnt;
	string name[cnt];
	int		data[cnt][3];
	int		n[cnt];
	for(int i = 0; i < cnt; i++)
	{
		cin >> name[i] >> data[i][0] >> data[i][1] >> data[i][2];
		n[i] = i;
	}
	merge_vector(name, n, data, 0, cnt - 1);
	for(int i = 0; i < cnt; i++)
	{
		cout << name[n[i]] << "\n";
	}
}
