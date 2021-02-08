#include <iostream>
#include <string>
using namespace std;
string sort[100001];
void change_data(string data[], int i, int j)
{
	string a;

	a = data[i];
	data[i] = data[j];
	data[j] = a;
}

int comp(string data1, string data2)
{
	if (data1[0] == '-')
	{
		if (data2[0] != '-')
			return (-1);
		else if (data1.size() > data2.size())
			return (-1);
		else if (data1.size() < data2.size())
			return 1;
		for(int i = 0; i < data1.size(); i++)
		{
			if (data1[i] > data2[i])
				return (-1);
			else if (data1[i] < data2[i])
				return (1);
		}
	}
	else if (data1[0] != '-')
	{
		if (data2[0] == '-')
			return (1);
		else if (data1.size() > data2.size())
			return (1);
		else if (data1.size() < data2.size())
			return (-1);
		for(int i = 0; i < data1.size(); i++)
		{
			if (data1[i] > data2[i])
				return (1);
			else if (data1[i] < data2[i])
				return (-1);
		}
	}
	return (0);
}

void sot(string data[], int left, int mid, int right)
{
	int i, j, k;
	i = left;
	j = mid + 1;
	k = left;
	while(i <=mid && j <=right)
	{
		if (comp(data[i] , data[j]) < 0)
		{
			sort[k] = data[i];
			i++;
		}
		else
		{
			sort[k] = data[j];
			j++;
		}
		k++;
	}
	if (i > mid)
	{
		for(int l = j; l <= right; l++)
		{
			sort[k] = data[l];
			k++;
		}
	}
	else
	{
		for(int l = i; l <= mid; l++)
		{
			sort[k] = data[l];
			k++;
		}
	}
	for(int l = left; l <= right; l++)
	{
		data[l] = sort[l];
	}
}

void merge(string data[], int left, int right)
{
	int mid;

	if (left < right)
	{
		mid = (left + right) / 2;
		merge(data, left, mid);
		merge(data, mid+1, right);
		sot(data, left, mid, right);
	}
}
int main()
{
	int cnt;
	cin >> cnt;
	string data[cnt];
	string out1;
	string out2;
	int		outcnt1;
	int		outcnt2;
	for(int i = 0; i < cnt; i++)
		cin >> data[i];
	merge(data, 0, cnt - 1);
	outcnt2 = -1;
	outcnt1 = 1;
	out1 = data[0];
	for(int i = 1; i < cnt; i++)
	{
		if(outcnt1 < 0)
		{
			outcnt1 = 1;
			out1 = data[i];
		}
		if(out1.compare(data[i]) == 0)
		{
			outcnt1++;
		}
		else
		{
			if (outcnt2 < 0)
			{
				outcnt2 = outcnt1;
				out2 = out1;
				outcnt1 = -1;
			}
			else if(outcnt2 < outcnt1)
			{
				outcnt2 = outcnt1;
				out2 = out1;
				outcnt1 = -1;
			}
			else
			{
				outcnt1 = -1;
			}
		}
	}
	cout << out2;
}
