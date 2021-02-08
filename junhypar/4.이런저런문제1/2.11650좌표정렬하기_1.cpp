#include <iostream>
using namespace std;

int sot[100001][2];

void merge(int data[][2], int left, int mid, int right)
{
	int i,j,k ;
	i = left;
	j = mid+1;
	k = left;

	while(i<=mid && j<=right)
	{
		if(data[i][0] < data[j][0] || ((data[i][0] == data[j][0]) && (data[i][1] <= data[j][1])))
		{
			sot[k][0] = data[i][0];
			sot[k][1] = data[i][1];
			i++;
		}
		else
		{
			sot[k][0] = data[j][0];
			sot[k][1] = data[j][1];
			j++;
		}
		k++;
	}
	if (i > mid)
	{
		for(int l = j; l <=right; l++)
		{
			sot[k][0] = data[l][0];
			sot[k][1] = data[l][1];
			k++;
		}
	}
	else
	{
		for(int l = i; l <=mid; l++)
		{
			sot[k][0] = data[l][0];
			sot[k][1] = data[l][1];
			k++;
		}
	}

	for(int l = left; l <= right; l++)
	{
		data[l][0] = sot[l][0];
		data[l][1] = sot[l][1];
	}
}

void merge_sort(int data[][2], int left, int right)
{
	int mid;

	if (left < right)
	{
		mid = (left + right)/2;
		merge_sort(data,left, mid);
		merge_sort(data,mid+1, right);
		merge(data,left,mid,right);
	}
}

int main()
{
	int cnt;
	cin >> cnt;
	int data[cnt][2];
	for(int i = 0; i < cnt; i++)
		cin >> data[i][0] >> data[i][1];
	merge_sort(data, 0, cnt - 1);
	for(int i = 0; i < cnt; i++)
	{
		cout << data[i][0] << " "<<data[i][1]<<endl;
	}
}
